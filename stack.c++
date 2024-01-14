#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    // Добавляем элементы в очередь
    myQueue.push(5);
    std::cout << "Добавлен элемент: 5\n";
    
    myQueue.push(10);
    std::cout << "Добавлен элемент: 10\n";

    myQueue.push(15);
    std::cout << "Добавлен элемент: 15\n";

    // Извлекаем элементы из очереди
    if (!myQueue.empty()) {
        int frontElement = myQueue.front();
        myQueue.pop();
        std::cout << "Извлечен элемент: " << frontElement << "\n";
    } else {
        std::cout << "Очередь пуста, невозможно выполнить операцию dequeue.\n";
    }

    if (!myQueue.empty()) {
        int frontElement = myQueue.front();
        myQueue.pop();
        std::cout << "Извлечен элемент: " << frontElement << "\n";
    } else {
        std::cout << "Очередь пуста, невозможно выполнить операцию dequeue.\n";
    }

    if (!myQueue.empty()) {
        int frontElement = myQueue.front();
        myQueue.pop();
        std::cout << "Извлечен элемент: " << frontElement << "\n";
    } else {
        std::cout << "Очередь пуста, невозможно выполнить операцию dequeue.\n";
    }

    // Попытка извлечения из пустой очереди
    if (!myQueue.empty()) {
        int frontElement = myQueue.front();
        myQueue.pop();
        std::cout << "Извлечен элемент: " << frontElement << "\n";
    } else {
        std::cout << "Очередь пуста, невозможно выполнить операцию dequeue.\n";
    }

    return 0;
}
