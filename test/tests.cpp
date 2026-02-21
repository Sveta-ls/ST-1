// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
TEST(zyazeva_checkPrime, checkPrime1) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
}

TEST(zyazeva_checkPrime, checkPrime2) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_FALSE(checkPrime(16));
}

TEST(zyazeva_checkPrime, checkPrime3) {
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(17));
  EXPECT_TRUE(checkPrime(31));
}

TEST(zyazeva_checkPrime, checkPrime4) {
  EXPECT_TRUE(checkPrime(997));
  EXPECT_TRUE(checkPrime(104729));
  EXPECT_FALSE(checkPrime(100000));
  EXPECT_FALSE(checkPrime(19191910));
}

TEST(zyazeva_nextPrime, nextPrime1) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
}

TEST(zyazeva_nextPrime, nextPrime2) {
  EXPECT_EQ(nPrime(11), 31);
  EXPECT_EQ(nPrime(12), 37);
  EXPECT_EQ(nPrime(30), 113);
  EXPECT_EQ(nPrime(40), 173);
}

TEST(zyazeva_nextPrime, nextPrime3) {
  EXPECT_EQ(nPrime(50), 229);
  EXPECT_EQ(nPrime(100), 541);
  EXPECT_EQ(nPrime(200), 1223);
  EXPECT_EQ(nPrime(500), 3571);
}
TEST(zyazeva_nextPrime, nextPrime4) {
  EXPECT_EQ(nPrime(0), 0);
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(5), 11);
}
TEST(zyazeva_nextPrime, nextPrime5) {
  EXPECT_EQ(nextPrime(100), 101);
  EXPECT_EQ(nextPrime(500), 503);
  EXPECT_EQ(nextPrime(997), 1009);
  EXPECT_EQ(nextPrime(1000), 1009);
}
TEST(zyazeva_sumPrime, sumPrime1) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(5), 5);
  EXPECT_EQ(sumPrime(10), 17);
}
TEST(zyazeva_sumPrime, sumPrime2) {
  EXPECT_EQ(sumPrime(20), 77);
  EXPECT_EQ(sumPrime(50), 328);
  EXPECT_EQ(sumPrime(100), 1060);
  EXPECT_EQ(sumPrime(200), 4227);
}

TEST(zyazeva_checkPrime, checkPrime5_negative) {
  EXPECT_FALSE(checkPrime(-2));
  EXPECT_FALSE(checkPrime(-34));
  EXPECT_FALSE(checkPrime(-50));
  EXPECT_FALSE(checkPrime(-2525253));
}
