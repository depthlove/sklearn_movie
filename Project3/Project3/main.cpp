//#include<Python.h>
#include "mysk_py.hpp"
#include<vector>

int main(){
	/*
	Py_Initialize();
	PyRun_SimpleString("print 'Hello Python!'\n");
	PyObject *pModule, *pFunc, *pFunc2, *pFunc3;
	PyObject *pArgs, *pValue;
	int res;
	//PyRun_SimpleString("import sys");
	//PyRun_SimpleString("sys.path.append('..\\..')");
	//pModule = PyImport_Import(PyString_FromString("sklearn_movie.my_sk_readmodel"));
	pModule = PyImport_Import(PyString_FromString("my_sk_readmodel"));

	pFunc = PyObject_GetAttrString(pModule, "my_test");
	pArgs = PyTuple_New(1);
	PyTuple_SetItem(pArgs, 0, PyInt_FromLong(6));
	pValue = PyObject_CallObject(pFunc, pArgs);
	res = PyInt_AsLong(pValue);
	printf("1 : %d\n", res);
	
	pFunc2 = PyObject_GetAttrString(pModule, "my_test2");
	pArgs = PyTuple_New(64);
	for (size_t i = 0; i < 64; i++)
		PyTuple_SetItem(pArgs, i, PyInt_FromLong(i));
	PyTuple_SetItem(pArgs, 3, PyInt_FromLong(666));
	pValue = PyObject_CallObject(pFunc2, pArgs);
	res = PyInt_AsLong(pValue);
	printf("2 : %d\n", res);

	pFunc3 = PyObject_GetAttrString(pModule, "my_test3");
	pArgs = PyTuple_New(64);
	for (size_t i = 0; i < 64; i++)
		PyTuple_SetItem(pArgs, i, PyInt_FromLong(i));
	pValue = PyObject_CallObject(pFunc3, pArgs);
	res = PyInt_AsLong(pValue);
	printf("3 : %d\n", res);
	
	Py_Finalize();
	*/

	
	std::vector<int> testdata(mysk_py.datasize);
	int *testdata2 = new int[mysk_py.datasize];
	for (int i = 0;i < mysk_py.datasize;++i) {
		testdata[i] = i;
		testdata2[i] = i;
	}

	printf("hpp vector\t: %d\n", mysk_py.predict(testdata));
	printf("hpp *     \t: %d\n", mysk_py.predict(testdata2));

	system("pause");
	return 0;
}