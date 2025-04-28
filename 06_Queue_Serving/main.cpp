#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

struct Client
{
    Client(int id, float rating) : id(id), rating(rating) {}
    int id;
    float rating;
};

class Queue
{
public:
    // Добавление клиента в очередь
    void addClient(int id, float rating)
    {
        clients.push_back(Client(id, rating));
        //testPrint();
    }
    // Обслуживание первого клиента
    void serveClient()
    {
        clients.pop_front();
        //testPrint();
    }
    // Проверка очереди и удаление клиентов с низким рейтингом
    void checkQueue()
    {
        clients.erase(remove_if(clients.begin(), clients.end(),
                                [](Client item)
                                { return (item.rating > 0.00 && item.rating < 2.50); }),
                      clients.end());
        //testPrint();
    }

private:
    void testPrint()
    {
        for (auto item : clients)
        {
            cout << "id: " << item.id << " rating: " << item.rating << endl;
        }
        cout << "-----------" << endl;
    }
    deque<Client> clients;
};

void test()
{
    Queue queue;
    queue.addClient(1, 4.38);
    queue.addClient(2, 1.20);
    queue.addClient(3, 5.00);
    queue.checkQueue();  // вывод: [1, 3]
    queue.serveClient(); // вывод: 1
    queue.checkQueue();  // вывод: [3]
}

int main()
{
    test();
    return 0;
}