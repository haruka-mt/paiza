num = int(input())

cityList = []
timeList = []
for i in range(num):
    tmp = input().split()
    cityList.append(tmp[0])
    timeList.append(int(tmp[1]))

user = input().split(' ')
index = cityList.index(user[0])
time = user[1]
hour = int(time.split(':')[0])
min = time.split(':')[1]

for i in range(num):
    cityHour = hour + timeList[i] - timeList[index]
    
    if cityHour > 23:
        cityHour -= 24
    elif cityHour < 0:
        cityHour += 24

    print('%02d:%s' % (cityHour, min))
