import numpy as np

with open("file_names.txt") as f:
    names = [line for line in f]
  

with open("file_names.txt") as f:
    names = [line.rstrip() for line in f]

count=0
x=[]
y=[]
for name in names:
    with open(name,"r+") as f:
        for line in f:
            count += 1
            if count%2==1:
                x.append(float(line.rstrip()))
            else:
                y.append(float(line.rstrip()))
        for c in np.polyfit(x,y,len(x)-1):
            f.write("\n")
            f.write(str(c)) 
    x=[]
    y=[]    
    count=0