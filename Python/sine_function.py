print("\n OUTPUT \n")
from numpy import*
from scipy import*
from pylab import*
# setting the x coordinates 
t = arange(0, 1, 0.01) 
#setting freqency of sine wave
f=int(input("Enter frequency="))
##setting amplitude of sine wave
a=int(input("Enter amplitude="))
# setting the corresponding y coordinates 
y = a*sin(2*pi*f*t) 
# naming the x axis 
xlabel('time in seconds') 
# naming the y axis 
ylabel('amplitude')  
# giving a title to my graph 
title('sine graph') 
# potting the points 
stem(t, y, linefmt ='red', markerfmt ='D')  #red coloured lines and top of each line the shape is diamond blue ring 
#grid 
grid()
# function to show the plot 
show() 
