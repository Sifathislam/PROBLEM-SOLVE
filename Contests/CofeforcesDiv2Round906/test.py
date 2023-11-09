def is_good_array(n, a):
    # Check if there is a unique sum for pairs of adjacent elements
    unique_sums = set()
    for i in range(n - 1):
        unique_sums.add(a[i] + a[i + 1])

    if len(unique_sums) == 1:
        return "Yes"
    else:
        return "No"

# Input the number of test cases
t = int(input())

for _ in range(t):
    n = int(input())  # Length of the array
    a = list(map(int, input().split()))  # Array elements

    result = is_good_array(n, a)
    print(result)
