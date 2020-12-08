#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "viginere.h"
#include "decrypt.h"
#include "decode.h"

// add your tests here
TEST_CASE("all lower case"){
  CHECK(encryptCaesar("way to go" , 5) == "bfd yt lt");
  CHECK(encryptCaesar("hello world", 8) == "pmttw ewztl");
  CHECK(encryptCaesar("sarah sookoo", 3) == "vdudk vrrnrr");
}

TEST_CASE("all upper case"){
  CHECK(encryptCaesar("WAY TO GO" , 5) == "BFD YT LT");
  CHECK(encryptCaesar("HELLO WORLD", 8) == "PMTTW EWZTL");
  CHECK(encryptCaesar("SARAH SOOKOO", 3) == "VDUDK VRRNRR");
}

TEST_CASE("mixed"){
  CHECK(encryptCaesar("Way To Go!" , 5) == "Bfd Yt Lt!");
  CHECK(encryptCaesar("HeLlO wOrLd!", 8) == "PmTtW eWzTl!");
  CHECK(encryptCaesar("Sarah A. Sookoo", 3) == "Vdudk D. Vrrnrr");
}

TEST_CASE("all mixed"){
  CHECK(encryptViginere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
  CHECK(encryptViginere("How are you?", "today") == "Acz apx mru?");
  CHECK(encryptViginere("Have a good day!", "day") == "Kath a erob gaw!");
}

TEST_CASE("all mixed"){
  CHECK(decryptViginere(encryptViginere("Hello, World!", "cake"), "cake") == "Hello, World!");
  CHECK(decryptViginere(encryptViginere("How are you?", "today"), "today") == "How are you?");
  CHECK(decryptViginere(encryptViginere("Have a good day!", "day"), "day") == "Have a good day!");
}

TEST_CASE("mixed"){
  CHECK(decryptCaesar(encryptCaesar("Way To Go!" , 5), 5) == "Way To Go!");
  CHECK(decryptCaesar(encryptCaesar("HeLlO wOrLd!", 8), 8) == "HeLlO wOrLd!");
  CHECK(decryptCaesar(encryptCaesar("Sarah A. Sookoo", 3), 3) == "Sarah A. Sookoo");
}

TEST_CASE("testing decode"){
  CHECK(decode("Hjjvykpun av hss ruvdu shdz vm hcphapvu, aolyl pz uv dhf h ill zovbsk il hisl av msf.")=="According to all known laws of aviation, there is no way a bee should be able to fly.");
  CHECK(decode("khoor pb qdph lv vdudk vrrnrr") == "hello my name is sarah sookoo");
  CHECK(decode("bfd yt lt") == "way to go");
  CHECK(decode("krz duh brx") == "how are you");
}
