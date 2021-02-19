#include <Arduino.h>
#include <unity.h>

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

// void test_led_builtin_pin_number(void) {
    // TEST_ASSERT_EQUAL(13, LED_BUILTIN);
// }

// void test_led_state_high(void) {
    // digitalWrite(LED_BUILTIN, HIGH);
    // TEST_ASSERT_EQUAL(HIGH, digitalRead(LED_BUILTIN));
// }

// void test_led_state_low(void) {
    // digitalWrite(LED_BUILTIN, LOW);
    // TEST_ASSERT_EQUAL(LOW, digitalRead(LED_BUILTIN));
// }

// void setup() {
    // // NOTE!!! Wait for >2 secs
    // // if board doesn't support software reset via Serial.DTR/RTS
    // delay(2000);

    // UNITY_BEGIN();    // IMPORTANT LINE!
    // RUN_TEST(test_led_builtin_pin_number);

    // pinMode(LED_BUILTIN, OUTPUT);
// }

// uint8_t i = 0;
// uint8_t max_blinks = 5;

// void loop() {
    // if (i < max_blinks)
    // {
        // RUN_TEST(test_led_state_high);
        // delay(500);
        // RUN_TEST(test_led_state_low);
        // delay(500);
        // i++;
    // }
    // else if (i == max_blinks) {
      // UNITY_END(); // stop unit testing
    // }
// }


String STR_TO_TEST;

void setUp(void) {
    // set stuff up here
    STR_TO_TEST = "Hello, world!";
}

void tearDown(void) {
    // clean stuff up here
    STR_TO_TEST = "";
}

void test_string_concat(void) {
    String hello = "Hello, ";
    String world = "world!";
    TEST_ASSERT_EQUAL_STRING(STR_TO_TEST.c_str(), (hello + world).c_str());
}

void test_string_substring(void) {
    TEST_ASSERT_EQUAL_STRING("Hello", STR_TO_TEST.substring(0, 5).c_str());
}

void test_string_index_of(void) {
    TEST_ASSERT_EQUAL(7, STR_TO_TEST.indexOf('w'));
}

void test_string_equal_ignore_case(void) {
    TEST_ASSERT_TRUE(STR_TO_TEST.equalsIgnoreCase("HELLO, WORLD!"));
}

void test_string_to_upper_case(void) {
    STR_TO_TEST.toUpperCase();
    TEST_ASSERT_EQUAL_STRING("HELLO, WORLD!", STR_TO_TEST.c_str());
}

void test_string_replace(void) {
    STR_TO_TEST.replace('!', '?');
    TEST_ASSERT_EQUAL_STRING("Hello, world?", STR_TO_TEST.c_str());
}

void setup()
{
    delay(2000); // service delay
    UNITY_BEGIN();

    RUN_TEST(test_string_concat);
    RUN_TEST(test_string_substring);
    RUN_TEST(test_string_index_of);
    RUN_TEST(test_string_equal_ignore_case);
    RUN_TEST(test_string_to_upper_case);
    RUN_TEST(test_string_replace);

    UNITY_END(); // stop unit testing
}

void loop()
{
}