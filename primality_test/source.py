import math

def isprime(n):
	''' function to perform primality test'''
	if (n==1):
		return False
	elif (n==2 or n==3):
		return True
	elif (n%2==0 or n%3==0):
		return False

	K = int(math.sqrt(n))
	for x in range(5, K+1, 6):
		if n%x==0 or n%(x+2)==0:
			return False
	else:
		return True

T = int(input())
while T:
	print(isprime(int(input())))
	T-=1
