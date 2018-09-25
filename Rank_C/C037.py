inputData = input().split(' ')
time = inputData[1].split(':')
date = inputData[0].split('/')
hour = int(time[0])
day = int(date[1])
if hour > 23:
    overDays = int(hour / 24)
    overHours = hour % 24
    day += overDays
    hour = overHours
print('%s/%02d %02d:%s' %(date[0], day, hour, time[1]))

