class Cars:
    def __init__(self, cars):
        self.cars = cars
        self.marka  = ''

baza = open("baza.txt.", encoding="utf-8").read()
with open('baza.txt') as f:
    lines = f.readlines()
count = len(lines)

command_list = ['Список доступных команд:'," 1) Добавить машину", " 2) Вывести список машин", ' 3) Изменить', ' 4) Удалить', ' 5) Поиск по характеристике']
for i in range(len(command_list)):
        print(command_list[i])

command = str(input())
if command == '1':
    f = open('baza.txt', 'a',encoding="utf-8" )
    car_properties = [str(count + 1)]
    for e in ['Введите марку', 'Введите модель', 'Введите цвет машины', 'Введите государственный номер', 'Машина находится на стоянке?']:
        print(e)
        car_properties.append(str(input()))
    for element in car_properties:
        f.write(element + " ")
    f.write("\n")
    f.close()
elif command == '2':
    print(baza)
elif command == '3':
    with open('baza.txt',encoding="utf-8") as f:
        array = [row.strip() for row in f]
        for i in range(len(array)):
            a = (array[i]).split(' ')
            array[i] = a
    print(baza)
    print('Введите позицию машины, харрактиристику которой хотите изменить')
    num = int(input())
    print('Какую харрактеристику вы хотели бы изменить?')
    characteristic = str(input())
    if characteristic == 'Марка':
        n_characteristic = 1
    elif characteristic == 'Модель':
        n_characteristic = 2
    elif characteristic == 'Цвет':
        n_characteristic = 3
    elif characteristic == 'Гос.номер':
        n_characteristic = 4
    elif characteristic == 'Находится на стоянке':
        n_characteristic = 5
    else:
        print("Такой комманды не существует")
        exit()
    print('Введите новую характеристику')
    new_characteristic = str(input())
    for i in range(len(array)):
        if array[i][0] == str(num):
            array[i][n_characteristic] = new_characteristic
    array2 = []
    a = ''
    for i in range(len(array)):
        for j in range(len(array[i])):
            a += array[i][j] + ' '
        array2.append(a)
        a = ''
    f = open('baza.txt', 'w',encoding="utf-8" )
    for i in range(len(array2)):
        f.write(str(array2[i]))
        f.write('\n')
    f.close()
elif command == '4':
    with open('baza.txt', encoding="utf-8") as f:
        array3 = [row.strip() for row in f]
        for i in range(len(array3)):
            a = (array3[i]).split(' ')
            array3[i] = a
    print(baza)
    print('Введите позицию машины, которую хотите удалить')
    num2 = int(input())
    array4 = []
    a = ''
    for i in range(len(array3) - 1):
        if int(array3[i][0]) >= num2:
            array3[i][0] = str(int(array3[i][0]) - 1)
            array3[i] = array3[i + 1]
    for i in range(len(array3) - 1):
        for j in range(len(array3[i])):
            a += array3[i][j] + ' '
        array4.append(a)
        a = ''
    f = open('baza.txt', 'w', encoding="utf-8")
    for i in range(len(array4)):
        f.write(str(array4[i]))
        f.write('\n')
    f.close()
elif command == "5":
    print('Введите название характеристики, по которой хотите найти машину')
    characteristic = str(input())
    print('Введите саму характеристику')
    target_characteristic = str(input())
    n_characteristic = 0
    if characteristic == 'Марка':
         n_characteristic = 1
    elif characteristic == 'Модель':
         n_characteristic = 2
    elif characteristic == 'Цвет':
        n_characteristic = 3
    elif characteristic == 'Гос.номер':
        n_characteristic = 4
    elif characteristic == 'Находится на стоянке':
        n_characteristic = 5
    with open('baza.txt',encoding="utf-8") as f:
        array = [row.strip() for row in f]
        for i in range(len(array)):
            a = (array[i]).split(' ')
            array[i] = a
    array2=[]
    for i in range(len(array)):
        if array[i][n_characteristic] == target_characteristic:
           array2.append(array[i])

    for i in range(len(array2)):
        c = ''
        for j in range(len(array2[i])):
            c += array2[i][j] + ' '
        print(c)
else:
    print("Введеной вами команды не существует")
