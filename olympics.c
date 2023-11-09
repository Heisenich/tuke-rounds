void olympics() {
    while (!beepers_present()) {
        while(front_is_clear()) {
            step();
        }

        turn_left();
        while (right_is_blocked() && !beepers_present()) {
            step();
        }
        turn_left();
        turn_left();
        turn_left();
        if(front_is_clear()) {
            step();
        }
        while (right_is_blocked() && !beepers_present()) {
            step();
        }
        turn_left();
        turn_left();
        turn_left();
        while (front_is_clear() && !beepers_present()) {
            step();
        }
        turn_left();
    }
}
