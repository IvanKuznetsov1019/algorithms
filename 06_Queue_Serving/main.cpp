#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

struct Client {
  Client(int id, float rating) : id(id), rating(rating) {}
  int id;
  float rating;
};

class Queue {
 public:
  void addClient(int id, float rating) {
    clients.push_back(Client(id, rating));
    // testPrint();
  }

  void serveClient() {
    clients.pop_front();
    // testPrint();
  }

  void checkQueue() {
    clients.erase(
        remove_if(clients.begin(), clients.end(),
                  [](Client client) {
                    return (client.rating > 0.00 && client.rating < 2.50);
                  }),
        clients.end());
    // testPrint();
  }

 private:
  void testPrint() {
    for (const Client& client : clients) {
      cout << "id: " << client.id << " rating: " << client.rating << endl;
    }
    cout << "-----------" << endl;
  }
  list<Client> clients;
};

void test() {
  Queue queue;
  queue.addClient(1, 4.38);
  queue.addClient(2, 1.20);
  queue.addClient(3, 5.00);
  queue.checkQueue();
  queue.serveClient();
  queue.checkQueue();
}

int main() {
  test();
  return 0;
}
