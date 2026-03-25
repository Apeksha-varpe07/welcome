def sum_of_digits(n):
   if (n<10)
return n 
digit_sum=sum(int(digit)for digit in str(n))
return sum_of_digits(digits_sum)
print(sum_of_digits(457))
