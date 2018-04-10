import cs50

QUARTER = 25
DIME = 10
NICKLE = 5
PENNY = 1

change = 0.0
cents = 0
counter = 0

change = cs50.get_float ("O hai! How much change is owed? ")

while(change < 0):
    change = cs50.get_float ("O hai! How much change is owed? ")

cents = round(change * 100)

while ((cents - QUARTER) >= 0):
        counter += 1
        cents = (cents - QUARTER)



while ((cents - DIME) >= 0):
    counter += 1
    cents = (cents - DIME)


while ((cents - NICKLE) >= 0):
    counter += 1
    cents = (cents - NICKLE)


while ((cents - PENNY) >= 0):
    counter +=1
    cents = (cents - PENNY)


print(counter)