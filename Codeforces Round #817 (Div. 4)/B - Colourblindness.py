for _ in [0]*int(input()):
    lenth = int(input())
    string1 = input().replace('G', 'B')
    string2 = input().replace('G', 'B')

    if(string1 == string2):
        print("YES")
    else:
        print("NO")
