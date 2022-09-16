#include <utility>
#include "queue.h"

using std::pair;
using Quant::Queue;

typedef pair<float, int> order;
enum OrderType {Buy, Sell};

/**
 * EXTRA CREDIT!!!
 * Given two queues of orders (Price, Qty), you need to return a queue of orders 
 * that reflect trades that executed. As a reminder, we only use limit orders.
 * Also make sure to change the bid/ask queue (aka orderbook) to accurately 
 * reflect the changes. When you return, incoming will always be empty.
 * Example:
 * Bid - (99, 100), (98, 100), (97, 300)
 * Ask - (100, 200), (101, 300)
 * Incoming - (Sell, (99, 200)), (Buy, (98, 200))
 * 
 * Bid - (98, 300), (97, 300)
 * Ask - (99, 100), (100, 200), (101, 300)
 * Return - (99, 100)
 */
Queue<order> matching(Queue<order>& bid, Queue<order>& ask, Queue<pair<OrderType, order>>& incoming) {
    // @TODO: Put your code here
    return Queue<order>();
}