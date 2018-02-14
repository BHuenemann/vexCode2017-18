void FFFanfare() {
  //        180 = Tempo
  //          4 = Default octave
  //    Quarter = Default note length
  //        10% = Break between notes
  //
  playTone(  587,   15); wait1Msec( 167);  // Note(D5, Duration(Eighth))
  playTone(  587,   15); wait1Msec( 167);  // Note(D5, Duration(Eighth))
  playTone(  587,   15); wait1Msec( 167);  // Note(D5, Duration(Eighth))
  playTone(  587,   45); wait1Msec( 500);  // Note(D5, Duration(Quarter .))
  playTone(  466,   45); wait1Msec( 500);  // Note(A#, Duration(Quarter .))
  playTone(  523,   45); wait1Msec( 500);  // Note(C5, Duration(Quarter .))
  playTone(  587,   30); wait1Msec( 333);  // Note(D5)
  playTone(  523,   15); wait1Msec( 167);  // Note(C5, Duration(Eighth))
  playTone(  587,   90); wait1Msec(1000);  // Note(D5, Duration(Half .))
  return;
}

task music {
	wait1Msec(5000);
	FFFanfare();
}
