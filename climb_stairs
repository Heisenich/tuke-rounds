void climb_stairs() {
    while(front_is_clear() && right_is_blocked()) {
        while(beepers_present()) {
            pick_beeper();
        }
        step();
    }

    if(front_is_blocked()) {
        turn_left();
    }

    while(front_is_clear() && right_is_blocked()) {
        while(beepers_present()) {
            pick_beeper();
        }
        step();
    }
    turn_left();
    turn_left();
    turn_left();
    step();

    while(front_is_clear() && right_is_blocked()) {
        while(beepers_present()) {
            pick_beeper();
        }
        step();
    }

    if(front_is_blocked() && right_is_blocked() && left_is_blocked()) {
        while(beepers_in_bag()) {
            put_beeper();
        }
    }
    else if(right_is_blocked()) {
        climb_stairs();
    }
    else {
        turn_left();
        turn_left();
        step();
        turn_left();
        turn_left();
        while(beepers_in_bag()) {
            put_beeper();
        }
    }
}
