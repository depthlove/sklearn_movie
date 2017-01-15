from sklearn.naive_bayes import MultinomialNB
mnb=MultinomialNB()

datasize=64
def get_datasize():
    return datasize

import pickle
f = open(r"model.model")
mnb = pickle.load(f)

import numpy

def my_test(x):
    print type(x)
    return x+1

def my_test2(*y):
    print type(y)
    return y[3]

def my_test3(*z):
    return mnb.predict(numpy.array(z).reshape(1,-1))





