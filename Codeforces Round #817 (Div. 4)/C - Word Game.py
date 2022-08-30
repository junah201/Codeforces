for _ in [0]*int(input()):
    lenth = int(input())
    dicts = {}

    for user in range(3):
        words = list(input().split())

        for word in words:
            if(dicts.get(word) == None):
                dicts[word] = [user]
            else:
                dicts[word].append(user)

    score = [0, 0, 0]

    for word in dicts:
        if(len(dicts[word]) == 1):
            score[dicts[word][0]] += 3
        elif(len(dicts[word]) == 2):
            score[dicts[word][0]] += 1
            score[dicts[word][1]] += 1

    print(*score)
