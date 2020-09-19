i, string = input().split()

while (string != "0" and i != "0"):
    result = ""
    array = list(string)
    
    for v in array:
        if v != i:
            result += v
    
    if (result == ""): print(0)
    else: print(int(result))
    i, string = input().split()