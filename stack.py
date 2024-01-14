class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return len(self.items) == 0

    def push(self, item):
        self.items.append(item)
        print(f"Добавлен элемент: {item}")
        self.display()

    def pop(self):
        if not self.is_empty():
            popped_item = self.items.pop()
            print(f"Извлечен элемент: {popped_item}")
            self.display()
            return popped_item
        else:
            print("Стек пуст, невозможно выполнить операцию pop.")
            return None

    def display(self):
        print("Содержимое стека:", self.items)


# Создаем экземпляр стека
my_stack = Stack()

# Добавляем элементы в стек
my_stack.push(5)
my_stack.push(10)
my_stack.push(15)

# Извлекаем элементы из стека
my_stack.pop()
my_stack.pop()
my_stack.pop()
my_stack.pop()  # Попытка извлечения из пустого стека
