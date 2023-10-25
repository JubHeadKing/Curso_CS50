-- Keep a log of any SQL queries you execute as you solve the mystery.
--THIEF
SELECT name FROM people
JOIN passengers ON passengers.passport_number = people.passport_number WHERE passengers.flight_id = (
    SELECT id FROM flights
    WHERE year = 2021 AND month = 7 AND day = 29 AND origin_airport_id = (
        SELECT id FROM airports WHERE city = "Fiftyville")
    ORDER BY hour, minute
    LIMIT 1);
    --Doris, Sofia, Bruce, Edwuard, Kelsey, Taylor, Kenny, Luca.
--NUMBERS
SELECT name FROM people
JOIN phone_calls ON phone_calls.caller = people.phone_number
WHERE year = 2021 AND month = 7 AND duration < 60;
--Place
SELECT city FROM airports
WHERE id = (SELECT destination_airport_id FROM flights
    WHERE year = 2021 AND month = 7 AND day = 29 AND origin_airport_id = (
        SELECT id FROM airports WHERE city = "Fiftyville")
        ORDER BY hour, minute
        LIMIT 1);
--ACCOMPLICE
SELECT phone_number FROM people WHERE name = "Bruce";
--(367) 55-5533 xd

--Umm xd
SELECT name FROM people WHERE phone_number = (
    SELECT receiver FROM phone_calls
    WHERE year = 2021 AND month = 7 AND day = 28 AND duration < 60 AND caller = "(367) 555-5533");
--Ajá Robin xd, te agarraron en la masa de las manos AHAHAH