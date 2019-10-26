function towerHanoi(disc, src, des, buffer) {
    if (disc >= 1) {

        // Move a tower of disc-1 to the buffer, using the destination.
        towerHanoi(disc - 1, src, buffer, des);

        // Move the remaining disk to the destination.
        console.log('Move disk from tower ', src, ' to tower ', des);

        // Move the tower of `disc-1` from the `buffer` to the `destination` using the `source`.        
        towerHanoi(disc - 1, buffer, des, src);
    }

    return;
}

towerHanoi(3, "A", "C", "B");