from sklearn.naive_bayes import MultinomialNB
import pandas
mnb=MultinomialNB()

datasize=64
def get_datasize():
    return datasize

import pickle
f = open(r"model.model")
mnb = pickle.load(f)

import numpy

#from sklearn.metrics import classification_report
#data = pandas.read_csv("mother_128.txt", sep="     ",engine='python')
#ll=range(1, 129)
#X_mother_128=data[ll]
#Y_mother_128 = data['vec']
#mnb.fit(X_mother_128, Y_mother_128)
#score_mother_128 = mnb.score(X_mother_128, Y_mother_128)
#print "mother_128 :", score_mother_128
#print mnb.predict(X_mother_128)
#print X_mother_128.values[0]
#print mnb.predict(X_mother_128.values[0])



def my_test(x):
    print type(x)
    return x+1

def my_test2(*y):
    print type(y)
    return y[3]

def my_test3(*z):
    #print type(pandas.DataFrame(numpy.array(z)))
    #print (pandas.DataFrame(numpy.array(z).reshape(1,-1))).values[0]
    #print type(pandas.Series(numpy.array(z)))
    #print (numpy.array(z).reshape(1,-1))[0]
    print numpy.array(z).reshape(1,-1)
    return mnb.predict(numpy.array(z).reshape(1,-1))
    #return mnb.predict((pandas.DataFrame(numpy.array(z).reshape(1,-1))).values[0])





