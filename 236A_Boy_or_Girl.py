s = input()
s1 = list(set(list(s)))
if len(s1) % 2 != 0:
    print("IGNORE HIM!")
else:
    print("CHAT WITH HER!")