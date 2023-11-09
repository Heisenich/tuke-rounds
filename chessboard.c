void chessboard() {
    while(front_is_clear()) {
        step();

        turn_left();
        turn_left();
        step();

        if(!beepers_present()) {
            turn_left();
            turn_left();
            step();
            put_beeper();
        }
        else {
            turn_left();
            turn_left();
            step();
        }

    }
    if(facing_east()) {
        turn_left();
    }
    else {
        turn_left();
        turn_left();
        turn_left();
    }

    if(front_is_clear()) {
        step();

        turn_left();
        turn_left();
        step();

        if(!beepers_present()) {
            turn_left();
            turn_left();
            step();
            put_beeper();
        }
        else {
            turn_left();
            turn_left();
            step();
        }

        if(right_is_blocked()) {
            turn_left();
        }
        else {
            turn_left();
            turn_left();
            turn_left();
        }

        chessboard();
    }
}
