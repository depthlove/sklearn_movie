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

	
	std::vector<int> testdata(mysk_py.datasize());
	int *testdata2 = new int[mysk_py.datasize()];
	for (int i = 0;i < mysk_py.datasize();++i) {
		testdata[i] = i;
		testdata2[i] = i;
	}

	std::vector<int> testdata3 = {16,12,11,18,19,11,29,69,15,13,12,17,18,20,57,112,16,17,16,16,11,15,62,127,14,18,19,19,11,10,52,115,13,15,17,20,17,17,57,116,20,17,13,14,13,16,57,116,21,19,14,13,9,11,52,112,10,14,18,21,17,16,57,118};
	std::vector<int> testdata4 = { 18,16,15,18,14,14,59,126,18,16,15,18,14,14,59,126,18,16,15,18,14,14,59,126,18,16,15,18,14,14,59,126,18,16,15,18,14,14,59,126,18,16,15,18,14,14,59,126,18,16,15,18,14,14,59,126,18,16,15,18,14,14,59,126 };
	std::vector<int> testdata5 = { 16,12,11,18,19,11,29,69,15,13,12,17,18,20,57,112,16,17,16,16,11,15,62,127,14,18,19,19,11,10,52,115,13,15,17,20,17,17,57,116,20,17,13,14,13,16,57,116,21,19,14,13,9,11,52,112,10,14,18,21,17,16,57,118,16,16,16,16,16,14,34,60,16,16,16,16,16,11,64,131,16,16,16,16,16,12,58,116,16,16,16,16,16,12,57,114,16,16,16,16,16,12,57,113,16,16,16,16,16,12,57,113,16,16,16,16,16,12,57,113,16,16,16,16,16,12,57,114 };
	std::vector<int> testdata6 = { 61,61,60,60,59,59,58,58,135,135,134,134,133,133,133,132,115,115,115,115,114,114,114,114,116,116,116,116,116,116,116,116,115,115,115,115,115,115,115,116,117,117,117,117,118,118,118,118,113,113,114,114,115,115,115,115,116,116,117,117,118,118,119,119,61,60,60,60,60,60,60,60,134,133,133,132,132,131,131,133,118,116,117,116,117,117,116,117,117,115,116,116,116,117,117,116,116,115,115,116,116,116,116,116,116,115,115,116,115,116,116,116,116,115,115,116,116,117,117,117,117,117,117,117,118,118,119,120 };
	std::vector<int> testdata7 = { 16,12,11,18,19,11,29,69,15,13,12,17,18,20,57,112,16,17,16,16,11,15,62,127,14,18,19,19,11,10,52,115,13,15,17,20,17,17,57,116,20,17,13,14,13,16,57,116,21,19,14,13,9,11,52,112,10,14,18,21,17,16,57,118,16,16,16,16,16,14,34,60,16,16,16,16,16,11,64,131,16,16,16,16,16,12,58,116,16,16,16,16,16,12,57,114,16,16,16,16,16,12,57,113,16,16,16,16,16,12,57,113,16,16,16,16,16,12,57,113,16,16,16,16,16,12,57,114 };
	//printf("%d\n", testdata7.size());

	//printf("hpp vector\t: %d\n", mysk_py.predict(testdata));
	//printf("hpp *\t: %d\n", mysk_py.predict(testdata2));
	//printf("hpp vector\t: %d\n", mysk_py.predict(testdata3));
	//printf("hpp vector\t: %d\n", mysk_py.predict(testdata4));
	printf("hpp vector\t: %d\n", mysk_py.predict(testdata5));
	printf("hpp vector\t: %d\n", mysk_py.predict(testdata6));
	printf("hpp vector\t: %d\n", mysk_py.predict(testdata7));

	system("pause");
	return 0;
}