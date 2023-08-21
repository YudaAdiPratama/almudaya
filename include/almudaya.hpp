#include <eosio/eosio.hpp>

using namespace std;
using namespace eosio;
#define AUTH "mudayarecord"

CONTRACT almudaya : public contract {
  public:
    using contract::contract;

    ACTION sign(string data, string signe);
};
