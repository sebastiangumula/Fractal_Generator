plot "result.txt" w dot  
set terminal png
set output "result.png"
load "result.png"
replot
set terminal x11
set output
