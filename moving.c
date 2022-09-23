#include <stdint.h>
#include <assert.h>

uint64_t mover_total(uint64_t capacity, uint64_t price, uint64_t boxes) {
  assert(capacity != 0);
  uint64_t truckloads_needed = boxes / capacity;
  if (boxes % capacity > 0) truckloads_needed++;
  return truckloads_needed * price;
}

// Choose the cheapest moving company, between Alice's and Bob's to move `boxes` boxes.
const char *choose_mover(uint64_t boxes) {
  const uint64_t ALICE_CAPACITY = 23;
  const uint64_t BOB_CAPACITY = 30;
  const uint64_t ALICE_PRICE = 200;
  const uint64_t BOB_PRICE = 260;
    
  uint64_t bob_total = mover_total(BOB_CAPACITY, BOB_PRICE, boxes);
  uint64_t alice_total = mover_total(ALICE_CAPACITY, ALICE_PRICE, boxes);
  
  if (bob_total < alice_total) {
    return "Bob";
  } else {
    return "Alice";
  }
}
