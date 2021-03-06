#include "HuobiSwap/SubscriptionClient.h"
#include "SubscriptionClientImpl.h"
#include "SyncClientImpl.h"
#include "HuobiSwap/SubscriptionOptions.h"
#include "HuobiSwap/RequestOptions.h"
#include "HuobiSwap/WsRequestClient.h"
#include "WsRequestClientImpl.h"

namespace HuobiSwap {

    SubscriptionClient* createSubscriptionClient(const char* apiKey, const char* secretKey, SubscriptionOptions& op) {
        return new SubscriptionClientImpl(apiKey, secretKey, op);
    }

    SubscriptionClient* createSubscriptionClient() {
        return new SubscriptionClientImpl();
    }

    SubscriptionClient* createSubscriptionClient(const char* apiKey, const char* secretKey) {
        SubscriptionOptions op;
        return new SubscriptionClientImpl(apiKey, secretKey, op);
    }

    SubscriptionClient* createSubscriptionClient(SubscriptionOptions& op) {
        return new SubscriptionClientImpl(op);
    }

    RequestClient* createRequestClient() {
        return new SyncClientImpl();
    }

    RequestClient* createRequestClient(const char* apiKey, const char* secretKey) {
        return new SyncClientImpl(apiKey, secretKey);
    }

    RequestClient* createRequestClient(RequestOptions&op) {
        return new SyncClientImpl(op);
    }

    RequestClient* createRequestClient(const char* apiKey, const char* secretKey, RequestOptions&op) {
        return new SyncClientImpl(apiKey, secretKey, op);
    }
    
    
    WsRequestClient* createWsRequestClient() {
        return new WsRequestClientImpl();
    }

    WsRequestClient* createWsRequestClient(const char* apiKey, const char* secretKey) {
        return new WsRequestClientImpl(apiKey, secretKey);
    }
}