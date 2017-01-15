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
	const int datasize = 64;
	int predict(const int data[]);
private:
	PyObject *pModule, *pFunc;
};
static MYSK_PY mysk_py;

MYSK_PY::MYSK_PY()
{
	Py_Initialize();
	pModule = PyImport_Import(PyString_FromString("my_sk_readmodel"));
	pFunc = PyObject_GetAttrString(pModule, "my_test3");
}

MYSK_PY::~MYSK_PY()
{
	Py_Finalize();
}

int MYSK_PY::predict(const std::vector<int> data) {
	PyObject *pArgs, *pValue;
	int res;
	pArgs = PyTuple_New(data.size());
	for (size_t i = 0; i < data.size(); i++)
		PyTuple_SetItem(pArgs, i, PyInt_FromLong(data[i]));
	pValue = PyObject_CallObject(pFunc, pArgs);
	res = PyInt_AsLong(pValue);
	return res;
}

int MYSK_PY::predict(const int data[]) {
	PyObject *pArgs, *pValue;
	int res;
	pArgs = PyTuple_New(datasize);
	for (size_t i = 0; i < datasize; i++)
		PyTuple_SetItem(pArgs, i, PyInt_FromLong(data[i]));
	pValue = PyObject_CallObject(pFunc, pArgs);
	res = PyInt_AsLong(pValue);
	return res;
}

#endif