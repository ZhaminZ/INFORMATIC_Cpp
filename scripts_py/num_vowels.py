def count_vowels(input_string):
    vowels = "aeiouаеёиоуыэюя"
    return sum(1 for char in input_string.lower() if char in vowels)



user_input = input("Введите строку: ")
result = count_vowels(user_input)
print(f"Количество гласных в введенной строке: {result}")