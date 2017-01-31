#ifndef __MYSK_PY_HPP__
#define __MYSK_PY_HPP__

#include<Python.h>
#include<vector>

class MYSK_PY
{
public:
	MYSK_PY();
	~MYSK_PY();
	int predict(const std::vector<int> data);
	int datasize() { return mydatasize; }
	int predict(const int data[]);
private:
	PyObject *pModule, *pFunc;
	int mydatasize;
};
static MYSK_PY mysk_py;

MYSK_PY::MYSK_PY()
{
	Py_Initialize();
	pModule = PyImport_Import(PyString_FromString("my_sk_readmodel"));
	pFunc = PyObject_GetAttrString(pModule, "my_test3");
	PyObject *pArgs=NULL, *pFunc_datasize= PyObject_GetAttrString(pModule, "get_datasize");
	mydatasize = PyInt_AsLong(PyObject_CallObject(pFunc_datasize,pArgs));
}

MYSK_PY::~MYSK_PY()
{
	Py_Finalize();
}

int MYSK_PY::predict(const std::vector<int> data) {
	PyObject *pArgs, *pValue;
	int res;
	pArgs = PyTuple_New(data.size());
	for (size_t i = 0; i < data.size(); i++) {
		PyTuple_SetItem(pArgs, i, PyInt_FromLong(data[i]));
		//printf("%d\t", data[i]);
	}
	//printf("\n");
	pValue = PyObject_CallObject(pFunc, pArgs);
	res = PyInt_AsLong(pValue);
	//printf("%d\n", res);
	return res;
}

int MYSK_PY::predict(const int data[]) {
	PyObject *pArgs, *pValue;
	int res;
	pArgs = PyTuple_New(datasize());
	for (size_t i = 0; i < datasize(); i++) {
		PyTuple_SetItem(pArgs, i, PyInt_FromLong(data[i]));
		//printf("%d\t", data[i]);
	}
	//printf("\n");
	pValue = PyObject_CallObject(pFunc, pArgs);
	res = PyInt_AsLong(pValue);
	//printf("%d\n", res);
	return res;
}

#endif