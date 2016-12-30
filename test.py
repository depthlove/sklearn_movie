import pandas

data = pandas.read_csv("data/mv_qcif_motheranddaughter_0.txt",sep="    ")
#print data.head()
print data.info()
#X=data['0':'63']
Y=data['vec']
#print X
#data.to_csv("mo.csv")
import sklearn
