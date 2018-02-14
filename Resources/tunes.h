/*void countdown()
{
//Code for song: countdown
wait1Msec(530);
wait1Msec(260);
playTone(988, 13); while(bSoundActive) {}
playTone(880, 13); while(bSoundActive) {}
playTone(988, 53); while(bSoundActive) {}
playTone(659, 53); while(bSoundActive) {}
wait1Msec(530);
wait1Msec(260);
playTone(1047, 13); while(bSoundActive) {}
playTone(988, 13); while(bSoundActive) {}
playTone(1047, 26); while(bSoundActive) {}
playTone(988, 26); while(bSoundActive) {}
playTone(880, 53); while(bSoundActive) {}
wait1Msec(530);
wait1Msec(260);
playTone(1047, 13); while(bSoundActive) {}
playTone(988, 13); while(bSoundActive) {}
playTone(1047, 53); while(bSoundActive) {}
playTone(659, 53); while(bSoundActive) {}
wait1Msec(530);
wait1Msec(260);
playTone(880, 13); while(bSoundActive) {}
playTone(784, 13); while(bSoundActive) {}
playTone(880, 26); while(bSoundActive) {}
playTone(784, 26); while(bSoundActive) {}
playTone(740, 26); while(bSoundActive) {}
playTone(880, 26); while(bSoundActive) {}
playTone(784, 53); while(bSoundActive) {}
playTone(740, 13); while(bSoundActive) {}
playTone(784, 13); while(bSoundActive) {}
playTone(880, 53); while(bSoundActive) {}
playTone(784, 13); while(bSoundActive) {}
playTone(880, 13); while(bSoundActive) {}
playTone(988, 26); while(bSoundActive) {}
playTone(880, 26); while(bSoundActive) {}
playTone(784, 26); while(bSoundActive) {}
playTone(740, 26); while(bSoundActive) {}
playTone(659, 53); while(bSoundActive) {}
playTone(1047, 53); while(bSoundActive) {}
playTone(988, 106); while(bSoundActive) {}
playTone(988, 13); while(bSoundActive) {}
playTone(1047, 13); while(bSoundActive) {}
playTone(988, 13); while(bSoundActive) {}
playTone(880, 13); while(bSoundActive) {}
playTone(988, 212); while(bSoundActive) {}
}

void SmashmouthAllStar()
{
//        112 = Tempo
//          5 = Default octave
//    Quarter = Default note length
//        10% = Break between notes
//
playTone(  932,   24); wait1Msec( 268);  // Note(A#, Duration(Eighth))
playTone(  739,   48); wait1Msec( 536);  // Note(F#)
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  622,   12); wait1Msec( 134);  // Note(D#, Duration(16th))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(    0,   24); wait1Msec( 268);  // Note(Rest, Duration(Eighth))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  622,   12); wait1Msec( 134);  // Note(D#, Duration(16th))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(    0,   24); wait1Msec( 268);  // Note(Rest, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(    0,   24); wait1Msec( 268);  // Note(Rest, Duration(Eighth))
playTone(  932,   72); wait1Msec( 804);  // Note(A#, Duration(Quarter .))
playTone(  932,   24); wait1Msec( 268);  // Note(A#, Duration(Eighth))
playTone(  739,   48); wait1Msec( 536);  // Note(F#)
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  622,   12); wait1Msec( 134);  // Note(D#, Duration(16th))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(    0,   24); wait1Msec( 268);  // Note(Rest, Duration(Eighth))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  622,   12); wait1Msec( 134);  // Note(D#, Duration(16th))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(    0,   24); wait1Msec( 268);  // Note(Rest, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(    0,   24); wait1Msec( 268);  // Note(Rest, Duration(Eighth))
playTone(  932,   72); wait1Msec( 804);  // Note(A#, Duration(Quarter .))
playTone(  932,   48); wait1Msec( 536);  // Note(A#)
playTone(  831,   36); wait1Msec( 402);  // Note(C#6, Duration(Eighth .))
playTone(  831,   12); wait1Msec( 134);  // Note(C#6, Duration(16th))
playTone(  987,   24); wait1Msec( 268);  // Note(B, Duration(Eighth))
playTone(  932,   24); wait1Msec( 268);  // Note(A#, Duration(Eighth))
playTone(  830,   24); wait1Msec( 268);  // Note(G#, Duration(Eighth))
playTone(  830,   24); wait1Msec( 268);  // Note(G#, Duration(Eighth))
playTone(  739,   96); wait1Msec(1071);  // Note(F#, Duration(Half))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  830,   24); wait1Msec( 268);  // Note(G#, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  932,   24); wait1Msec( 268);  // Note(A#, Duration(Eighth))
playTone(  830,   72); wait1Msec( 804);  // Note(G#, Duration(Quarter .))
playTone(  830,   24); wait1Msec( 268);  // Note(G#, Duration(Eighth))
playTone(  739,   48); wait1Msec( 536);  // Note(F#)
playTone(  830,   24); wait1Msec( 268);  // Note(G#, Duration(Eighth))
playTone(  932,   24); wait1Msec( 268);  // Note(A#, Duration(Eighth))
playTone(  622,   96); wait1Msec(1071);  // Note(D#, Duration(Half))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(    0,   24); wait1Msec( 268);  // Note(Rest, Duration(Eighth))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  554,   12); wait1Msec( 134);  // Note(C#, Duration(16th))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  739,   24); wait1Msec( 268);  // Note(F#, Duration(Eighth))
playTone(  932,   12); wait1Msec( 134);  // Note(A#, Duration(16th))
playTone(  739,   12); wait1Msec( 134);  // Note(F#, Duration(16th))
playTone(  554,   12); wait1Msec( 134);  // Note(C#, Duration(16th))
playTone(  554,   12); wait1Msec( 134);  // Note(C#, Duration(16th))
return;
}

/*
void greensleaves() {
//Code for song: Greensleaves
playTone(784, 42); while(bSoundActive) {}
playTone(932, 84); while(bSoundActive) {}
playTone(1047, 42); while(bSoundActive) {}
playTone(587, 42); while(bSoundActive) {}
playTone(1245, 28); while(bSoundActive) {}
playTone(1175, 42); while(bSoundActive) {}
playTone(1047, 84); while(bSoundActive) {}
playTone(880, 42); while(bSoundActive) {}
playTone(698, 42); while(bSoundActive) {}
playTone(784, 21); while(bSoundActive) {}
playTone(880, 42); while(bSoundActive) {}
playTone(932, 84); while(bSoundActive) {}
playTone(784, 42); while(bSoundActive) {}
playTone(784, 42); while(bSoundActive) {}
playTone(698, 21); while(bSoundActive) {}
playTone(784, 42); while(bSoundActive) {}
playTone(880, 84); while(bSoundActive) {}
playTone(698, 42); while(bSoundActive) {}
playTone(587, 84); while(bSoundActive) {}
playTone(784, 42); while(bSoundActive) {}
playTone(932, 84); while(bSoundActive) {}
playTone(1047, 42); while(bSoundActive) {}
playTone(587, 42); while(bSoundActive) {}
playTone(1319, 28); while(bSoundActive) {}
playTone(1175, 42); while(bSoundActive) {}
playTone(1047, 84); while(bSoundActive) {}
playTone(880, 42); while(bSoundActive) {}
playTone(698, 42); while(bSoundActive) {}
playTone(784, 21); while(bSoundActive) {}
playTone(880, 42); while(bSoundActive) {}
playTone(932, 42); while(bSoundActive) {}
playTone(880, 21); while(bSoundActive) {}
playTone(784, 42); while(bSoundActive) {}
playTone(740, 42); while(bSoundActive) {}
playTone(659, 21); while(bSoundActive) {}
playTone(740, 42); while(bSoundActive) {}
playTone(784, 84); while(bSoundActive) {}
}


void  indiana() {
//Code for song: Indiana
playTone(659, 24); while(bSoundActive) {}
wait1Msec(120);
playTone(698, 12); while(bSoundActive) {}
playTone(784, 12); while(bSoundActive) {}
wait1Msec(120);
playTone(1047, 96); while(bSoundActive) {}
wait1Msec(120);
playTone(587, 24); while(bSoundActive) {}
wait1Msec(120);
playTone(659, 12); while(bSoundActive) {}
playTone(698, 96); while(bSoundActive) {}
wait1Msec(240);
playTone(784, 24); while(bSoundActive) {}
wait1Msec(120);
playTone(880, 12); while(bSoundActive) {}
playTone(988, 12); while(bSoundActive) {}
wait1Msec(120);
playTone(1397, 96); while(bSoundActive) {}
wait1Msec(240);
playTone(880, 24); while(bSoundActive) {}
wait1Msec(120);
playTone(988, 12); while(bSoundActive) {}
playTone(1047, 48); while(bSoundActive) {}
playTone(1175, 48); while(bSoundActive) {}
playTone(1319, 48); while(bSoundActive) {}
playTone(659, 24); while(bSoundActive) {}
wait1Msec(120);
playTone(698, 12); while(bSoundActive) {}
playTone(784, 12); while(bSoundActive) {}
wait1Msec(120);
playTone(1047, 96); while(bSoundActive) {}
wait1Msec(240);
playTone(1175, 24); while(bSoundActive) {}
wait1Msec(120);
playTone(1319, 12); while(bSoundActive) {}
playTone(698, 96); while(bSoundActive) {}
playTone(784, 16); while(bSoundActive) {}
wait1Msec(120);
playTone(784, 12); while(bSoundActive) {}
playTone(659, 24); while(bSoundActive) {}
wait1Msec(160);
playTone(1175, 24); while(bSoundActive) {}
wait1Msec(120);
playTone(784, 12); while(bSoundActive) {}
playTone(659, 24); while(bSoundActive) {}
wait1Msec(160);
playTone(1175, 24); while(bSoundActive) {}
wait1Msec(120);
playTone(784, 12); while(bSoundActive) {}
playTone(698, 24); while(bSoundActive) {}
wait1Msec(160);
playTone(1319, 24); while(bSoundActive) {}
wait1Msec(120);
playTone(1175, 12); while(bSoundActive) {}
playTone(1047, 48); while(bSoundActive) {}
}


void mission() {
//Code for song: Mission
playTone(1175, 7); while(bSoundActive) {}
playTone(1245, 7); while(bSoundActive) {}
playTone(1175, 7); while(bSoundActive) {}
playTone(1245, 7); while(bSoundActive) {}
playTone(1175, 7); while(bSoundActive) {}
playTone(1245, 7); while(bSoundActive) {}
playTone(1175, 7); while(bSoundActive) {}
playTone(1245, 7); while(bSoundActive) {}
playTone(1175, 7); while(bSoundActive) {}
playTone(1175, 7); while(bSoundActive) {}
playTone(1245, 7); while(bSoundActive) {}
playTone(1319, 7); while(bSoundActive) {}
playTone(1397, 7); while(bSoundActive) {}
playTone(1480, 7); while(bSoundActive) {}
playTone(1568, 7); while(bSoundActive) {}
playTone(1568, 15); while(bSoundActive) {}
wait1Msec(300);
playTone(1568, 15); while(bSoundActive) {}
wait1Msec(300);
playTone(1865, 15); while(bSoundActive) {}
wait1Msec(150);
playTone(1047, 15); while(bSoundActive) {}
wait1Msec(150);
playTone(1568, 15); while(bSoundActive) {}
wait1Msec(300);
playTone(1568, 15); while(bSoundActive) {}
wait1Msec(300);
playTone(1397, 15); while(bSoundActive) {}
wait1Msec(150);
playTone(1480, 15); while(bSoundActive) {}
wait1Msec(150);
playTone(1568, 15); while(bSoundActive) {}
wait1Msec(300);
playTone(1568, 15); while(bSoundActive) {}
wait1Msec(300);
playTone(1865, 15); while(bSoundActive) {}
wait1Msec(150);
playTone(1047, 15); while(bSoundActive) {}
wait1Msec(150);
playTone(1568, 15); while(bSoundActive) {}
wait1Msec(300);
playTone(1568, 15); while(bSoundActive) {}
wait1Msec(300);
playTone(1397, 15); while(bSoundActive) {}
wait1Msec(150);
playTone(1480, 15); while(bSoundActive) {}
wait1Msec(150);
playTone(1865, 15); while(bSoundActive) {}
playTone(1568, 15); while(bSoundActive) {}
playTone(1175, 120); while(bSoundActive) {}
wait1Msec(70);
playTone(1865, 15); while(bSoundActive) {}
playTone(1568, 15); while(bSoundActive) {}
playTone(1109, 120); while(bSoundActive) {}
wait1Msec(70);
playTone(1865, 15); while(bSoundActive) {}
playTone(1568, 15); while(bSoundActive) {}
playTone(1047, 120); while(bSoundActive) {}
wait1Msec(150);
playTone(932, 15); while(bSoundActive) {}
playTone(1047, 15); while(bSoundActive) {}
}*/

void BackInBlack() {
	//Code for Song: Back in Black
	for(int i = 0; i < 4; i++) {
		playTone(  261,   30); wait1Msec( 300);  // Note(C4, Duration(Quarter))
		playTone(    0,   60); wait1Msec( 600);  // Note(Rest, Duration(Half))
		playTone(  233,   15); wait1Msec( 150);  // Note(A#3)
		playTone(  233,   15); wait1Msec( 150);  // Note(A#3)
		playTone(  233,   30); wait1Msec( 300);  // Note(A#3, Duration(Quarter))
		playTone(    0,   60); wait1Msec( 600);  // Note(Rest, Duration(Half))
		playTone(  174,   15); wait1Msec( 150);  // Note(F3)
		playTone(  174,   15); wait1Msec( 150);  // Note(F3)
		playTone(  174,   30); wait1Msec( 300);  // Note(F3, Duration(Quarter))
		if (!(i % 2)) {
			playTone(    0,  105); wait1Msec(1050);  // Note(Rest, Duration(Half))
			playTone(  311,   15); wait1Msec( 150);  // Note(D#4)
			playTone(  261,   15); wait1Msec( 150);  // Note(C4)
			playTone(  233,   15); wait1Msec( 150);  // Note(A#3)
			playTone(  195,   15); wait1Msec( 150);  // Note(G3)
			playTone(  195,   15); wait1Msec( 150);  // Note(G3)
			playTone(  174,   15); wait1Msec( 150);  // Note(F3)
			playTone(  164,   15); wait1Msec( 150);  // Note(E3)
		}
		else {
			playTone(    0,   30); wait1Msec( 300);  // Note(Rest, Duration(Half))
			playTone(  195,   15); wait1Msec( 150);  // Note(G3)
			playTone(  164,   30); wait1Msec( 300);  // Note(E3, Duration(Quarter))
			playTone(  195,   15); wait1Msec( 150);  // Note(G3)
			playTone(  174,   30); wait1Msec( 300);  // Note(F3, Duration(Quarter))
			playTone(  195,   15); wait1Msec( 150);  // Note(G3)
			playTone(  184,   15); wait1Msec( 150);  // Note(F#3)
			playTone(    0,   15); wait1Msec( 150);  // Note(Rest)
			playTone(  195,   15); wait1Msec( 150);  // Note(G3, Duration(Quarter))
			playTone(  195,   30); wait1Msec( 300);  // Note(G3, Duration(Quarter))
		}
	}
}
/*
void starwars() {
//Code for song: StarWars
for(int i = 0; i < 2; i++) {
playTone(  698,   15); wait1Msec( 167);  // Note(F, Duration(Eighth))
playTone(  698,   15); wait1Msec( 167);  // Note(F, Duration(Eighth))
playTone(  698,   15); wait1Msec( 167);  // Note(F, Duration(Eighth))
playTone(  932,   90); wait1Msec(1000);  // Note(A#, Duration(Half .))
playTone( 1047,   90); wait1Msec(1000);  // Note(F6, Duration(Half .))
for(int i = 0; i < 2; i++) {
playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
playTone(  880,   15); wait1Msec( 167);  // Note(D6, Duration(Eighth))
playTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
playTone( 1398,   90); wait1Msec(1000);  // Note(A#6, Duration(Half .))
playTone( 1047,   45); wait1Msec( 500);  // Note(F6, Duration(Quarter .))
}
playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
playTone(  880,   15); wait1Msec( 167);  // Note(D6, Duration(Eighth))
playTone(  933,   15); wait1Msec( 167);  // Note(D#6, Duration(Eighth))
playTone(  784,   60); wait1Msec( 667);  // Note(C6, Duration(Half))
playTone(    0,   30); wait1Msec( 333);  // Note(Rest)
}
}

void takeonme() {
//Code for song: takeOnMe
playTone(740, 18); while(bSoundActive) {}
playTone(740, 18); while(bSoundActive) {}
playTone(740, 18); while(bSoundActive) {}
playTone(587, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(494, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(659, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(659, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(659, 18); while(bSoundActive) {}
playTone(831, 18); while(bSoundActive) {}
playTone(831, 18); while(bSoundActive) {}
playTone(880, 18); while(bSoundActive) {}
playTone(988, 18); while(bSoundActive) {}
playTone(880, 18); while(bSoundActive) {}
playTone(880, 18); while(bSoundActive) {}
playTone(880, 18); while(bSoundActive) {}
playTone(659, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(587, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(740, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(740, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(740, 18); while(bSoundActive) {}
playTone(659, 18); while(bSoundActive) {}
playTone(659, 18); while(bSoundActive) {}
playTone(740, 18); while(bSoundActive) {}
playTone(659, 18); while(bSoundActive) {}
playTone(740, 18); while(bSoundActive) {}
playTone(740, 18); while(bSoundActive) {}
playTone(740, 18); while(bSoundActive) {}
playTone(587, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(494, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(659, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(659, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(659, 18); while(bSoundActive) {}
playTone(831, 18); while(bSoundActive) {}
playTone(831, 18); while(bSoundActive) {}
playTone(880, 18); while(bSoundActive) {}
playTone(988, 18); while(bSoundActive) {}
playTone(880, 18); while(bSoundActive) {}
playTone(880, 18); while(bSoundActive) {}
playTone(880, 18); while(bSoundActive) {}
playTone(659, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(587, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(740, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(740, 18); while(bSoundActive) {}
wait1Msec(180);
playTone(740, 18); while(bSoundActive) {}
playTone(659, 18); while(bSoundActive) {}
playTone(659, 18); while(bSoundActive) {}
}
*/
void CrazyTrain() {
	for(int i = 0; i < 2; i++) {
		playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
		playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
		playTone(    0,  120); wait1Msec(1200);  // Note(Rest, Duration(3 Quarters)
		playTone(  220,   20); wait1Msec( 200);  // Note(A3)
		playTone(  220,   20); wait1Msec( 200);  // Note(A3)
		playTone(    0,   40); wait1Msec( 400);  // Note(Rest, Duration(Quarter))
		playTone(  164,   20); wait1Msec( 200);  // Note(E3)
		playTone(  164,   20); wait1Msec( 200);  // Note(E3)
		playTone(    0,   40); wait1Msec( 400);  // Note(Rest, Duration(Quarter))
		playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
		playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
		playTone(    0,  120); wait1Msec(1200);  // Note(Rest, Duration(3 Quarters))
		playTone(  293,   20); wait1Msec( 200);  // Note(D4)
		playTone(  293,   20); wait1Msec( 200);  // Note(D4)
		playTone(    0,   40); wait1Msec( 400);  // Note(Rest, Duration(Quarter))
		playTone(  164,   20); wait1Msec( 200);  // Note(E3)
		playTone(  164,   20); wait1Msec( 200);  // Note(E3)
		playTone(    0,   40); wait1Msec( 400);  // Note(Rest, Duration(Quarter))
	}
	for(int i = 0; i < 3; i++) {
		playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
		playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
		playTone(  277,   20); wait1Msec( 200);  // Note(C#4)
		playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
		playTone(  293,   20); wait1Msec( 200);  // Note(D4)
		playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
		playTone(  277,   20); wait1Msec( 200);  // Note(C#4)
		playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
		playTone(  246,   20); wait1Msec( 200);  // Note(B3)
		playTone(  220,   20); wait1Msec( 200);  // Note(A3)
		playTone(  207,   20); wait1Msec( 200);  // Note(G#3)
		playTone(  220,   20); wait1Msec( 200);  // Note(A3)
		playTone(  246,   20); wait1Msec( 200);  // Note(B3)
		playTone(  220,   20); wait1Msec( 200);  // Note(A3)
		playTone(  207,   20); wait1Msec( 200);  // Note(G#3)
		playTone(  164,   20); wait1Msec( 200);  // Note(E3)
	}
	playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
	playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
	playTone(  277,   20); wait1Msec( 200);  // Note(C#4)
	playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
	playTone(  293,   20); wait1Msec( 200);  // Note(D4)
	playTone(  184,   20); wait1Msec( 200);  // Note(F#3)
	playTone(  277,   20); wait1Msec( 200);  // Note(C#4)
	playTone(  246,   20); wait1Msec( 200);  // Note(B3)
}

void EyeoftheTiger() {
	for(int i = 0; i < 2; i++) {
		playTone(  587,   30); wait1Msec( 300);  // Note(D5, Duration(Eighth))
		playTone(    0,   90); wait1Msec( 900);  // Note(Rest, Duration(3 Eighths))
		playTone(  587,   15); wait1Msec( 150);  // Note(D5, Duration(16th))
		playTone(    0,   30); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
		playTone(  523,   15); wait1Msec( 150);  // Note(C5, Duration(16th))
		playTone(    0,   30); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
		playTone(  587,   30); wait1Msec( 300);  // Note(D5, Duration(Eighth))
		playTone(    0,  120); wait1Msec(1200);  // Note(Rest, Duration(Half))
		if (!i) {
			playTone(  587,   15); wait1Msec( 150);  // Note(D5, Duration(16th))
			playTone(    0,   30); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
			playTone(  523,   15); wait1Msec( 150);  // Note(C5, Duration(16th))
			playTone(    0,   30); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
			playTone(  587,   30); wait1Msec( 300);  // Note(D5, Duration(Eighth))
			playTone(    0,  120); wait1Msec(1200);  // Note(Rest, Duration(Half))
		}
		if (i) {
			playTone(    0,   30); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
			playTone(  587,   30); wait1Msec( 300);  // Note(D5, Duration(Eighth))
			playTone(    0,   15); wait1Msec( 150);  // Note(Rest, Duration(16th))
			playTone(  523,   30); wait1Msec( 300);  // Note(C5, Duration(Eighth))
			playTone(		 0,		15); wait1Msec( 150);	 // Note(Rest, Duration(16th))
			playTone(  587,   30); wait1Msec( 300);  // Note(D5, Duration(Eighth))
			playTone(    0,   90); wait1Msec( 900);  // Note(Rest, Duration(3 Eighths))))
		}
		playTone(  587,   15); wait1Msec( 150);  // Note(D5, Duration(16th))
		playTone(    0,   30); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
		playTone(  440,   15); wait1Msec( 150);  // Note(A4, Duration(16th))
		playTone(    0,   30); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
		playTone(  466,  120); wait1Msec(1200);	 // Note(A#4, Duration(Half))
	}
}

// rtttl: Come Together:d=4,o=4,b=150: d, d, 8g, 8a, 2f5., 2d5, d, d, 8g, 8a, 2f5., 2d5, d, d, 8g, 8a, 2f5., 2d5, d, d, 8g, 8a, 2f5., 2d5, p, f5, f5, f5, f5, d5, c5, d5, p, f5., 8f5, f5, f5, d5, c5, d5, p, 2f5, f5, f5, d5, c5, d5, p, 2f5, d5, f5, d5, c5, d5, p, 2e5, p, 2e5, 2p, 2e5, d5, 2e5, p, 2p, f5, f5, f5, f5, f5, f5, f5, f5, f5, f5, f5, 2f5., 2p */

void ComeTogether()
{
  //        150 = Tempo
  //          4 = Default octave
  //    Quarter = Default note length
  //        10% = Break between notes
  //
  playTone(  293,   36); wait1Msec( 400);  // Note(D)
  playTone(  293,   36); wait1Msec( 400);  // Note(D)
  playTone(  391,   18); wait1Msec( 200);  // Note(G, Duration(Eighth))
  playTone(  440,   18); wait1Msec( 200);  // Note(A, Duration(Eighth))
  playTone(  698,  108); wait1Msec(1200);  // Note(F5, Duration(Half .))
  playTone(  587,   72); wait1Msec( 800);  // Note(D5, Duration(Half))
  playTone(  293,   36); wait1Msec( 400);  // Note(D)
  playTone(  293,   36); wait1Msec( 400);  // Note(D)
  playTone(  391,   18); wait1Msec( 200);  // Note(G, Duration(Eighth))
  playTone(  440,   18); wait1Msec( 200);  // Note(A, Duration(Eighth))
  playTone(  698,  108); wait1Msec(1200);  // Note(F5, Duration(Half .))
  playTone(  587,   72); wait1Msec( 800);  // Note(D5, Duration(Half))
  playTone(    0,   36); wait1Msec( 400);  // Note(Rest)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(  523,   36); wait1Msec( 400);  // Note(C5)
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(    0,   36); wait1Msec( 400);  // Note(Rest)
  playTone(  698,   54); wait1Msec( 600);  // Note(F5, Duration(Quarter .))
  playTone(  698,   18); wait1Msec( 200);  // Note(F5, Duration(Eighth))
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(  523,   36); wait1Msec( 400);  // Note(C5)
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(    0,   36); wait1Msec( 400);  // Note(Rest)
  playTone(  698,   72); wait1Msec( 800);  // Note(F5, Duration(Half))
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(  523,   36); wait1Msec( 400);  // Note(C5)
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(    0,   36); wait1Msec( 400);  // Note(Rest)
  playTone(  698,   72); wait1Msec( 800);  // Note(F5, Duration(Half))
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(  523,   36); wait1Msec( 400);  // Note(C5)
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(    0,   36); wait1Msec( 400);  // Note(Rest)
  playTone(  659,   72); wait1Msec( 800);  // Note(E5, Duration(Half))
  playTone(    0,   36); wait1Msec( 400);  // Note(Rest)
  playTone(  659,   72); wait1Msec( 800);  // Note(E5, Duration(Half))
  playTone(    0,   72); wait1Msec( 800);  // Note(Rest, Duration(Half))
  playTone(  659,   72); wait1Msec( 800);  // Note(E5, Duration(Half))
  playTone(  587,   36); wait1Msec( 400);  // Note(D5)
  playTone(  659,   72); wait1Msec( 800);  // Note(E5, Duration(Half))
  playTone(    0,   36); wait1Msec( 400);  // Note(Rest)
  playTone(    0,   72); wait1Msec( 800);  // Note(Rest, Duration(Half))
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,   36); wait1Msec( 400);  // Note(F5)
  playTone(  698,  108); wait1Msec(1200);  // Note(F5, Duration(Half .))
  playTone(    0,   72); wait1Msec( 800);  // Note(Rest, Duration(Half))
  return;
}

/*Come Together:d=4,o=4,b=150: d, d, 8g, 8a, 2f5., 2d5, d, d, 8g, 8a, 2f5., 2d5, d, d, 8g, 8a, 2f5., 2d5, d, d, 8g, 8a, 2f5., 2d5, p, f5, f5*/


task manageMusic() {
	bool isPlayed = false;		//Stores if the song has been played already
	clearTimer(T4);						//Clears the timer for the music
	while(1) {
		if(time1[T4] > 75000 && !isPlayed) {
			switch (SensorValue(leftEn) % 4) {
				case 0:
					EyeoftheTiger();
					break;
				case 1:
					CrazyTrain();
					break;
				case 2:
					BackInBlack();
					break;
				case 3:
					ComeTogether();
					break;
			}
			isPlayed = true;
		}
	}
}

task playSong() {
	CrazyTrain();
}
