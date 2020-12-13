# Python3 code to print all possible 
# subsequences for given array using 
# recursion 

# Recursive function to print all 
# possible subsequences for given array 
def printSubsequences(arr, index, subarr,n): 
	
	# Print the subsequence when reach 
	# the leaf of recursion tree 
	if index == len(arr): 
		
		# Condition to avoid printing 
		# empty subsequence 
		if len(subarr) != 0: 
			for i in range(1,n):
                counter=subarr.count(i):
                
	
	else: 
		# Subsequence without including 
		# the element at current index 
		printSubsequences(arr, index + 1, subarr,n) 
		
		# Subsequence including the element 
		# at current index 
		printSubsequences(arr, index + 1,subarr+[arr[index]],n) 
	
	return
		
arr = [1, 2, 2, 4] 

printSubsequences(arr, 0, []) 
