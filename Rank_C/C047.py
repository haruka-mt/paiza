input_lines = int(input())
word_list = []
for i in range(input_lines):
    word = input()
    check = word in word_list
    if check == True:
        word_list.remove(word)
    word_list.insert(0, word)

for s in word_list:
    print(s)

