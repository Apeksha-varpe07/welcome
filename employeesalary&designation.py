import pandas as pd
data={"employee":["Dipak","aniket","pritam","saurabh"],"designation":["IAS","Engineer","Computer","MBBS"],"salary":[100000,50000,28000,80000]}
df=pd.DataFrame(data)
df.to_CSV("/home/mcs/sybcs python/data.CSV",index=False)
df_read=pd.read_CSV("/home/mcs/sybcs python/data.CSV")
print(df_read)
