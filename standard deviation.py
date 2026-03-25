import statistics as st
CA=[87,89,98,94,78,77]
total=sum(CA)
mean=st.mean(CA)
median=st.median(CA)
mode=st.mode(CA)
std_dev=st.stdev(CA)
print("Data:",CA)
print("Sum:",total)
print("mean:",mean)
print("median:",median)
print("mode:",mode)
print("standard deviation:",std_dev)
