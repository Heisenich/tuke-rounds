void find_center() {

    while(not_facing_south()){
        turn_left();
    }
    while(front_is_clear()){
        step();
    }
    while(not_facing_west()){
        turn_left();
    }
    while(front_is_clear()){
        step();
    }
    turn_left();
    turn_left();
    turn_left();

    while(!beepers_present()){
        if(!beepers_present()){
            put_beeper();
        }
        while(front_is_clear() && !beepers_present()){
            step();
        }
        if(!beepers_present()){
            turn_left();
            turn_left();
            put_beeper();
        }
        if(beepers_present() && front_is_clear()){
            step();
        }
        while(!beepers_present() && front_is_clear()){
            step();
        }
        if(beepers_present()){
            turn_left();
            turn_left();
            step();
        }
    }

    put_beeper();
    while(front_is_clear()){
        step();
    }
    turn_left();
    turn_left();
    pick_beeper();
    while(front_is_clear()){
        step();
        pick_beeper();
    }

    turn_left();
    turn_left();
    while(!beepers_present()){
        step();
    }
    turn_left();
    turn_left();
    turn_left();

    pick_beeper();



    while(!beepers_present()){
        if(!beepers_present()){
            put_beeper();
        }
        while(front_is_clear() && !beepers_present()){
            step();
        }
        if(!beepers_present()){
            turn_left();
            turn_left();
            put_beeper();
        }
        if(beepers_present() && front_is_clear()){
            step();
        }
        while(!beepers_present() && front_is_clear()){
            step();
        }
        if(beepers_present()){
            turn_left();
            turn_left();
            step();
        }
    }

    put_beeper();
    while(front_is_clear()){
        step();
    }
    turn_left();
    turn_left();
    pick_beeper();
    while(front_is_clear()){
        step();
        pick_beeper();
    }

    turn_left();
    turn_left();
    while(!beepers_present()){
        step();
    }
    turn_left();
    turn_left();
    turn_left();

    pick_beeper();

    turn_left();
}
