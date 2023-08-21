#include <almudaya.hpp>

ACTION almudaya::sign(string data, string signe) {
  require_auth(eosio::name(AUTH));

  // Add a Ricardian Contract description
  string action_description = "Sign data: " + data + "\n" + "Signature: " + signe;
  eosio::print(action_description);
}

EOSIO_DISPATCH(almudaya, (sign))
