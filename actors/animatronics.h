Actor Bonnie 10000 {
    //$Category Animatronics
	var int user_chasing;
    Game Doom
    Health 2
    Radius 24
    Height 64
    Mass 1000
    Speed 1
    PainChance 0
    MeleeRange 42
    MaxStepHeight 32
    MaxDropOffHeight 32
    Monster
    +LOOKALLAROUND
    +SLIDESONWALLS
    -INVULNERABLE
    -NODAMAGE
    +REFLECTIVE
    +NOBLOOD
    +NORADIUSDMG
    SeeSound ""
    PainSound ""
    DeathSound ""
    ActiveSound ""
    Obituary "%o met their fate to Bonnie"

    States {
    Spawn:
        TNT1 A 0
        CYBI A 1 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        "####" "#" 0 A_Jump(2,"Wander","Look","Look","Spawn")
        Loop
    Look:
        CYBI BCDEFGHIJKLMNOPQRSTUVWXYZ 1 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBA ABCD 1 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
         "####" "#" 0 A_Jump(128,"Spawn","Spawn","Spawn","Wander")
        Loop
    Wander:
        CYBB B 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB B 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB C 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB D 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB E 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB F 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB G 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB H 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB I 2 A_Wander
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB J 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB K 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB L 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB M 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB N 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB O 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB P 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB Q 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB R 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB S 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB T 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB U 2 A_Wander
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB V 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB V 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_Jump(8,"Look","Spawn","Spawn","Spawn")
        "####" "#" 0 A_Jump(32,"BreathingWander")
        Loop
    BreathingWander:
        "####" "#" 0 A_PlaySound("Breathing",0,1.0)
        Goto Wander
    Chase:
        //TNT1 A 0 ACS_EXECUTEALWAYS(50,0,0,0)
    ChaseBegin:
        TNT1 A 0 A_SetUserVar("user_chasing",0)
        TNT1 A 0 A_JumpIfInTargetInventory("TargetFastMoving", 1, "ChaseFastTarget")
        TNT1 A 0 A_JumpIfInTargetInventory("TargetSlowMoving", 1, "ChaseSlowTarget")
        TNT1 A 0 A_JumpIfInTargetInventory("TargetNotMoving", 1, "ChaseIdleTarget")
    ChaseFastTarget:
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_GiveInventory ("IsChasingFast", 1)
        CYBB B 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        "####" "#" 0 A_ChangeVelocity(2,0,0,1)
        CYBB C 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB D 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB E 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5) 
        CYBB F 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB G 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5) 
        CYBB H 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB I 1 A_Chase
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        //"####" "#" 0 A_FaceTarget(5)
        CYBB J 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB K 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB L 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB M 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB N 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB O 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB P 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB Q 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB R 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB S 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB T 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        CYBB U 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB V 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_Jump(32,"BreathingChase")
        "####" "#" 0 A_Jump(8,"ChaseFastTarget")
        "####" "#" 0 A_JumpIfTargetInLOS ("ChaseFastTarget", 360, JLOSF_DEADNOJUMP, 0, 0)
        Goto ChaseBegin
    ChaseSlowTarget:
        TNT1 A 0 A_JumpIfCloser(896,"ChaseSlowTarget2")
        Goto ChaseFastTarget
    ChaseSlowTarget2:
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        TNT1 A 0 A_GiveInventory ("IsChasingMed", 1)
        CYBB B 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB C 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB D 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB E 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5) 
        CYBB F 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB G 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5) 
        CYBB H 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB I 4 A_Chase
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        //"####" "#" 0 A_FaceTarget(5)
        CYBB J 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB K 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB L 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB M 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB N 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB O 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB P 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB Q 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB R 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB S 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB T 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        CYBB U 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB V 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_Jump(32,"BreathingChase","LookAround")
        "####" "#" 0 A_JumpIfTargetInLOS ("ChaseSlowTarget", 90, JLOSF_DEADNOJUMP, 0, 0)
        "####" "#" 0 A_JumpIfInTargetInventory("TargetFastMoving", 1, "ChaseFastTarget")
        "####" "#" 0 A_JumpIfInTargetInventory("TargetNotMoving", 1, "ChaseIdleTarget")
        Goto ChaseBegin
    ChaseIdleTarget:
        TNT1 A 0 A_JumpIfCloser(512,"ChaseIdleTarget2")
        Goto ChaseSlowTarget2
    ChaseIdleTarget2:
        TNT1 A 0 A_JumpIfInTargetInventory("TargetFastMoving", 1, "ChaseFastTarget")
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_GiveInventory ("IsChasingSlow", 1)
        CYBB B 7 A_Chase
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB C 7 A_Chase
        CYBB D 7 A_Chase
        CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB E 7 A_Chase
        CYBB F 7 A_Chase
        CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB G 7 A_Chase 
        CYBB H 7 A_Chase
        CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB I 7 A_Chase
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        CYBB J 7 A_Chase
        CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB K 7 A_Chase
        CYBB L 7 A_Chase
        CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB M 7 A_Chase
        CYBB N 7 A_Chase
        CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB O 7 A_Chase
        CYBB P 7 A_Chase
        CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB Q 7 A_Chase
        CYBB R 7 A_Chase
        CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB S 7 A_Chase
        CYBB T 7 A_Chase
        CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        CYBB U 7 A_Chase
        CYBB V 7 A_Chase
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_Jump(52,"BreathingChase","LookAround")
        "####" "#" 0 A_JumpIfTargetInLOS ("ChaseIdleTarget", 15, JLOSF_DEADNOJUMP, 0, 0)
        "####" "#" 0 A_Jump(112,"LoseTarget","LookAround","Standing","Standing")
        Goto ChaseBegin
    BreathingChase:
        "####" "#" 0 A_PlaySound("Breathing",0,1.0)
        Goto ChaseBegin
    ChasingEnd:
        "####" "#" 0 A_JumpIfTargetInLOS ("ChaseBegin", 270, JLOSF_DEADNOJUMP, 1024, 0)
        "####" "#" 0 A_JumpIfInTargetLOS ("ChaseBegin", 45, JLOSF_DEADNOJUMP, 1024, 0)
        Goto LoseTarget
    LoseTarget:
        TNT1 A 0 A_ClearTarget
        //TNT1 A 0 ACS_EXECUTEALWAYS(51,0,0,0)
    LookAround:
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        CYBI BCDEFGHIJKLMNOPQRSTUVWXYZ 1
        CYBA ABCD 1
        Goto Spawn
    Standing:
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        CYBI A 10 A_JumpIfTargetInLOS ("ChaseBegin", 90, JLOSF_DEADNOJUMP, 2048, 0)
        "####" "#" 0 A_Jump(1,"LoseTarget","LookAround","LookAround")
        Loop
    Melee:
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        CYBI A 0 ACS_EXECUTEALWAYS(101,0,0,0)
        CYBI A 140 A_FaceTarget
        Goto Spawn
    Pain:
        TROO H 2
        TROO H 2 A_Pain
        Goto See
    Death:
        TROO I 8
        TROO J 8 A_Scream
        TROO K 6
        TROO L 6 A_NoBlocking
        TROO M -1
        Stop
    XDeath:
        TROO N 5
        TROO O 5 A_XScream
        TROO P 5
        TROO Q 5 A_NoBlocking
        TROO RST 5
        TROO U -1
        Stop
    See:
        Goto LookAround
    Raise:
        TROO MLKJI 8
        Goto See
    }
}

Actor Chica 10001 {
    //$Category Animatronics
	var int user_chasing;
    Game Doom
    Health 2
    Radius 24
    Height 64
    Mass 1000
    Speed 1
    PainChance 0
    MeleeRange 42
    MaxStepHeight 32
    MaxDropOffHeight 32
    Monster
    +SLIDESONWALLS
    -INVULNERABLE
    -NODAMAGE
    SeeSound ""
    PainSound ""
    DeathSound ""
    ActiveSound ""
    Obituary "%o met their fate to Chica"

    States {
    Spawn:
        TNT1 A 0
        CYBI A 1 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 180, "Chase") 
        "####" "#" 0 A_Jump(2,"Wander","Look","Look","Spawn")
        Loop
    See:
        TNT1 A 0
        Goto Look
    Look:
        CYBI BCDEFGHIJKLMNOPQRSTUVWXYZ 1 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBA ABCD 1 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
         "####" "#" 0 A_Jump(128,"Spawn","Spawn","Spawn","Wander")
        Loop
    Wander:
        CYBB B 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB B 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB C 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB D 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB E 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB F 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB G 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB H 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB I 2 A_Wander
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB J 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB K 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB L 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB M 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB N 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB O 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB P 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB Q 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB R 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB S 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB T 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB U 2 A_Wander
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB V 2 A_Wander
        "####" "#" 0 A_LookEx (0, 0, 2048, 0, 180, "Chase") 
        CYBB V 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_Jump(6,"Look","Spawn","Spawn","Spawn")
        "####" "#" 0 A_Jump(32,"BreathingWander")
        Loop
    BreathingWander:
        "####" "#" 0 A_PlaySound("Breathing",0,1.0)
        Goto Wander
    Chase:
        //TNT1 A 0 ACS_EXECUTEALWAYS(50,0,0,0)
        TNT1 A 0
    ChaseBegin:
        TNT1 A 0 A_SetUserVar("user_chasing",0)
        TNT1 A 0 A_JumpIfInTargetInventory("TargetFastMoving", 1, "ChaseFastTarget")
        TNT1 A 0 A_JumpIfInTargetInventory("TargetSlowMoving", 1, "ChaseSlowTarget")
        TNT1 A 0 A_JumpIfInTargetInventory("TargetNotMoving", 1, "ChaseIdleTarget")
    ChaseFastTarget:
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_GiveInventory ("IsChasingFast", 1)
        CYBB B 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        "####" "#" 0 A_ChangeVelocity(2,0,0,1)
        CYBB C 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB D 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB E 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5) 
        CYBB F 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB G 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5) 
        CYBB H 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB I 1 A_Chase
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        //"####" "#" 0 A_FaceTarget(5)
        CYBB J 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB K 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB L 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB M 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB N 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB O 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB P 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB Q 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB R 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB S 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB T 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        CYBB U 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB V 1 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_Jump(32,"BreathingChase")
        "####" "#" 0 A_Jump(8,"ChaseFastTarget")
        "####" "#" 0 A_JumpIfTargetInLOS ("ChaseFastTarget", 360, JLOSF_DEADNOJUMP, 0, 0)
        Goto ChaseBegin
    ChaseSlowTarget:
        TNT1 A 0 A_JumpIfCloser(512,"ChaseSlowTarget2")
        Goto ChaseFastTarget
    ChaseSlowTarget2:
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        TNT1 A 0 A_GiveInventory ("IsChasingMed", 1)
        CYBB B 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB C 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB D 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB E 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5) 
        CYBB F 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB G 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5) 
        CYBB H 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB I 4 A_Chase
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        //"####" "#" 0 A_FaceTarget(5)
        CYBB J 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB K 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB L 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB M 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB N 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB O 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB P 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB Q 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB R 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB S 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB T 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        CYBB U 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        CYBB V 4 A_Chase
        //"####" "#" 0 A_FaceTarget(5)
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_Jump(32,"BreathingChase","LookAround")
        "####" "#" 0 A_JumpIfTargetInLOS ("ChaseSlowTarget", 90, JLOSF_DEADNOJUMP, 0, 0)
        "####" "#" 0 A_JumpIfInTargetInventory("TargetFastMoving", 1, "ChaseFastTarget")
        "####" "#" 0 A_JumpIfInTargetInventory("TargetNotMoving", 1, "ChaseIdleTarget")
        Goto ChaseBegin
    ChaseIdleTarget:
        TNT1 A 0 A_JumpIfCloser(256,"ChaseIdleTarget2")
        Goto ChaseSlowTarget2
    ChaseIdleTarget2:
        TNT1 A 0 A_JumpIfInTargetInventory("TargetFastMoving", 1, "ChaseFastTarget")
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_GiveInventory ("IsChasingSlow", 1)
        CYBB B 7 A_Chase
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB C 7 A_Chase
        CYBB D 7 A_Chase
        CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB E 7 A_Chase
        CYBB F 7 A_Chase
        CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB G 7 A_Chase 
        CYBB H 7 A_Chase
        CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB I 7 A_Chase
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        CYBB J 7 A_Chase
        CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB K 7 A_Chase
        CYBB L 7 A_Chase
        CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB M 7 A_Chase
        CYBB N 7 A_Chase
        CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB O 7 A_Chase
        CYBB P 7 A_Chase
        CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB Q 7 A_Chase
        CYBB R 7 A_Chase
        CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
        CYBB S 7 A_Chase
        CYBB T 7 A_Chase
        CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_PlaySound("pstepm",0,1.0)
        CYBB U 7 A_Chase
        CYBB V 7 A_Chase
        "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
        "####" "#" 0 A_Jump(48,"BreathingChase","LookAround")
        "####" "#" 0 A_JumpIfTargetInLOS ("ChaseIdleTarget", 30, JLOSF_DEADNOJUMP, 0, 0)
        "####" "#" 0 A_Jump(112,"LoseTarget","LookAround","Standing","Standing")
        Goto ChaseBegin
    BreathingChase:
        "####" "#" 0 A_PlaySound("Breathing",0,1.0)
        Goto ChaseBegin
    ChasingEnd:
        "####" "#" 0 A_JumpIfTargetInLOS ("ChaseBegin", 270, JLOSF_DEADNOJUMP, 1024, 0)
        "####" "#" 0 A_JumpIfInTargetLOS ("ChaseBegin", 45, JLOSF_DEADNOJUMP, 1024, 0)
        Goto LoseTarget
    LoseTarget:
        TNT1 A 0 A_ClearTarget
        //TNT1 A 0 ACS_EXECUTEALWAYS(51,0,0,0)
    LookAround:
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        CYBI BCDEFGHIJKLMNOPQRSTUVWXYZ 1 
        CYBA ABCD 1
        "####" "#" 0 A_SetAngle(angle + random(-5,5))
        CYBI BCDEFGHIJKLMNOPQRSTUVWXYZ 1 
        CYBA ABCD 1
        "####" "#" 0 A_SetAngle(angle + random(-5,5))
        CYBI BCDEFGHIJKLMNOPQRSTUVWXYZ 1
        CYBA ABCD 1
        Goto Spawn
    Standing:
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        CYBI A 10 A_JumpIfTargetInLOS ("ChaseBegin", 90, JLOSF_DEADNOJUMP, 2048, 0)
        "####" "#" 0 A_Jump(1,"LoseTarget","LookAround","LookAround")
        Loop
    Melee:
        CYBI A 0 ACS_EXECUTEALWAYS(1101,0,0,0)
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingMed", 999)
        TNT1 A 0 A_TakeInventory ("IsChasingSlow", 999)
        CYBI A 140 A_FaceTarget
        Goto Spawn
    Pain:
        TROO H 2
        TROO H 2 A_Pain
        Goto See
    Death:
        TROO I 8
        TROO J 8 A_Scream
        TROO K 6
        TROO L 6 A_NoBlocking
        TROO M -1
        Stop
    XDeath:
        TROO N 5
        TROO O 5 A_XScream
        TROO P 5
        TROO Q 5 A_NoBlocking
        TROO RST 5
        TROO U -1
        Stop
    Raise:
        TROO MLKJI 8
        Goto See
    }
}

Actor Freddy 10002 {
    //$Category Animatronics
	var int user_chasing;
	var int user_scaretone;
    Game Doom
    Health 2
    Radius 24
    Height 64
    Mass 1000
    Speed 5
    PainChance 0
    MeleeRange 40
    MaxStepHeight 32
    MaxDropOffHeight 32
    CameraHeight 56
    Monster
    +SLIDESONWALLS
    -INVULNERABLE
    -NODAMAGE
    SeeSound ""
    PainSound ""
    DeathSound ""
    ActiveSound ""
    Obituary "%o met their fate to Freddy"

    States {
        Spawn:
            TNT1 A 0
            CYBI A 0 A_JumpIfInventory("FreddyCheck2", 1, "JingleWander")
            CYBI A 1 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            TNT1 A 0 A_Jump(1,"Spawn","Wander","Wander","CloakWander")
            Loop
        JingleReady:
                TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
            CYBI A 140
        JingleBegin:
            TNT1 A 0 A_ChangeFlag("THRUActorS", FALSE)
            TNT1 A 0 A_TakeInventory("FreddyCheck",1)
            TNT1 A 0 A_GiveInventory("FreddyCheck2",1)
        JingleWander:
            CYBI A 0 A_LookEx (0, 0, 4096, 0, 360, "JingleChase") 
            CYBI A 1 A_Wander
            Loop
        JingleChase: 
            CYBI A 0 A_Chase
            CYBI A 1 A_FaceTarget
            CYBI A 0 A_Chase
            CYBI A 1 A_FaceTarget
            CYBI A 0 A_Chase
            CYBI A 1 A_FaceTarget
            CYBI A 0 A_Chase
            CYBI A 1 A_FaceTarget
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            Loop
        See:
            TNT1 A 0
            Goto Watch
        Watch:
            TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
            TNT1 A 0 A_ChangeFlag("THRUActorS", FALSE)
            TNT1 A 0 A_TakeInventory("FreddyCheck",1)
            "####" "#" 0 A_Stop
            "####" "#" 0 A_JumpIfCloser(96, "Watch3")
            "####" "#" 0 A_JumpIfCloser(160, "Watch2")
            CYBI A 1 A_FaceTarget
            "####" "#" 0 A_Jump(1,"CloakWander")
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 128, JLOSF_DEADNOJUMP, 0, 0)
            Goto LoseTarget
         /* Watch2:
                CYBI B 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBI C 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")
                CYBI D 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBI E 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBI F 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")
                CYBI G 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")     
                CYBI H 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBI I 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBI J 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")
                CYBI K 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")    
                CYBI L 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBI M 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBI N 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")
                CYBI O 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")     
            Watch2Check:
                "####" "#" 0 A_Jump(32,"CloakWander")
                "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 128, JLOSF_DEADNOJUMP, 0, 0)
                "####" "#" 0 //A_CheckSight ("Watch") 
                "####" "#" 0 A_JumpIfTargetInLOS ("ChaseBegin", 360, JLOSF_DEADNOJUMP, 0, 0)
                Goto LoseTarget
            
            Watch3:
                "####" "#" 0 A_JumpIf(user_scaretone==1,"Watch3Start")
                "####" "#" 0 A_SetUserVar("user_scaretone",1)
                "####" "#" 0 A_PlaySound("ScareTone")
            Watch3Start:
                CYBA B 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBA C 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")
                CYBA D 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBA E 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBA F 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")
                CYBA G 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")     
                CYBA H 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBA I 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBA J 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")
                CYBA K 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")    
                CYBA L 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBA M 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee") 
                CYBA N 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")
                CYBA O 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")    
                CYBA P 1 A_FaceTarget
                "####" "#" 0 A_JumpIfTargetInsideMeleeRange("Melee")    
            Watch3Check:
                "####" "#" 0 A_Jump(36,"CloakWander")
                "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 128, JLOSF_DEADNOJUMP, 0, 0)
                "####" "#" 0 //A_CheckSight ("Watch") 
                "####" "#" 0 A_JumpIfTargetInLOS ("ChaseBegin", 360, JLOSF_DEADNOJUMP, 0, 0)
                Goto LoseTarget
            */
        Wander:
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB B 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB B 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB C 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB D 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB E 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB F 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB G 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB H 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB I 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB J 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB K 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB L 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB M 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB N 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB O 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB P 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB Q 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB R 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB S 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB T 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB U 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB V 1 A_Wander
            "####" "#" 0 //A_CheckSight ("Watch") 
            "####" "#" 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "Chase") 
            CYBB V 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_Jump(16,"Spawn","Spawn","Spawn")
            "####" "#" 0 A_Jump(24,"LaughWander")
            Loop
        LaughWander:
            "####" "#" 0 A_PlaySound("Laugh",0,1.0)
            Goto Wander
        CloakWander:
            TNT1 A 0 A_GiveInventory("FreddyCheck",1)
            TNT1 A 0 A_ChangeFlag("THRUActorS", TRUE)
        CloakWanderLoop:
            TNT1 A 1 A_Wander
            TNT1 A 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "ChaseCloak") 
            TNT1 AAAAAAAA 0 A_Wander
            TNT1 A 1 A_Wander
            TNT1 A 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "ChaseCloak") 
            TNT1 AAAAAAAA 0 A_Wander
            TNT1 A 1 A_Wander
            TNT1 A 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "ChaseCloak") 
            TNT1 AAAAAAAA 0 A_Wander
            TNT1 A 1 A_Wander
            TNT1 A 0 A_LookEx (LOF_NOSOUNDCHECK, 0, 2048, 0, 360, "ChaseCloak") 
            TNT1 AAAAAAAA 0 A_Wander
            "####" "#" 0 A_Jump(8,"LaughWanderCloak","UnCloakCheck")
            Loop
        LaughWanderCloak:
            "####" "#" 0 A_PlaySound("Laugh")
            Goto Wander
        UnCloakCheck:
            "####" "#" 0 //A_CheckSight ("CloakWanderLoop") 
            "####" "#" 0 A_JumpIfInTargetLOS ("CloakWander", 128, JLOSF_DEADNOJUMP, 2048, 0) 
            "####" "#" 0 A_TakeInventory("FreddyCheck",1)
            TNT1 A 0 A_ChangeFlag("THRUActorS", FALSE)
            Goto Spawn
        ChaseCloak:
            TNT1 A 0 A_GiveInventory ("IsChasingFast", 1)
            TNT1 A 1 A_Chase(0,0)
            TNT1 A 0 A_Chase(0,0)
            TNT1 A 1 A_Chase(0,0)
            TNT1 A 0 A_Chase(0,0)
            TNT1 A 1 A_Chase(0,0)
            TNT1 A 0 A_Chase(0,0)
            TNT1 A 1 A_Chase(0,0)
            TNT1 A 0 A_Chase(0,0)
            "####" "#" 0 A_Jump(3,"LaughChasingCloak")
            "####" "#" 0 A_Jump(1,"CameraStalk")
            "####" "#" 0 A_Jump(1,"JumpScareChance")
            "####" "#" 0 A_JumpIfInTargetLOS ("ChaseCloak", 128, JLOSF_DEADNOJUMP, 2048, 0) 
            "####" "#" 0 A_JumpIfCloser(96,"ChaseCloak")
            "####" "#" 0 A_JumpIfCloser(160,"Watch")
            Loop
        CameraStalk:
            TNT1 A 0 ACS_EXECUTEALWAYS(60,0,0,0)
        CameraStalkLoop:
            TNT1 A 0 A_Chase(0,0)
            TNT1 AAA 1 A_FaceTarget
            "####" "#" 0 A_Jump(1,"LaughStalkCloak")
            "####" "#" 0 A_Jump(16,"CameraStalkEnd")
            Loop
        CameraStalkEnd:
            TNT1 A 0 ACS_EXECUTEALWAYS(61,0,0,0)
            Goto ChaseCloak
        LaughStalkCloak:
            "####" "#" 0 A_PlaySound("Laugh",0,1.0)
            Goto CameraStalkLoop
        LaughChasingCloak:
            "####" "#" 0 A_PlaySound("Laugh",0,1.0)
            Goto ChaseCloak
        JumpScareChance:
            "####" "#" 0 A_Jump(16,"JumpScare")
            Goto ChaseCloak
        JumpScare:
            "####" "#" 0 A_GiveToTarget("FreddyScare", 1)
            Goto ChaseCloak
        Chase:
            //TNT1 A 0 ACS_EXECUTEALWAYS(50,0,0,0)
            TNT1 A 0
        ChaseBegin:
            TNT1 A 0 A_GiveInventory ("IsChasingFast", 1)
            TNT1 A 0 A_SetUserVar("user_scaretone",0)
            TNT1 A 0 A_SetUserVar("user_chasing",0)
        Chasing:
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB B 1 A_Chase
            CYBB B 0 A_FaceTarget(5)
            "####" "#" 0 A_ChangeVelocity(2,0,0,1)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB C 1 A_Chase
            CYBB C 0 A_FaceTarget(5)
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB D 1 A_Chase
            CYBB D 0 A_FaceTarget(5)
            CYBB D 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB E 1 A_Chase
            CYBB E 0 A_FaceTarget(5) 
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB F 1 A_Chase
            CYBB F 0 A_FaceTarget(5)
            CYBB F 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB G 1 A_Chase
            CYBB G 0 A_FaceTarget(5) 
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB H 1 A_Chase
            CYBB H 0 A_FaceTarget(5)
            CYBB H 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB I 1 A_Chase
            CYBB I 0 A_FaceTarget(5)
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB J 1 A_Chase
            CYBB J 0 A_FaceTarget(5)
            CYBB J 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB K 1 A_Chase
            CYBB K 0 A_FaceTarget(5)
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB L 1 A_Chase
            CYBB L 0 A_FaceTarget(5)
            CYBB L 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB M 1 A_Chase
            CYBB M 0 A_FaceTarget(5)
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB N 1 A_Chase
            CYBB N 0 A_FaceTarget(5)
            CYBB N 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB O 1 A_Chase
            CYBB O 0 A_FaceTarget(5)
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB P 1 A_Chase
            CYBB P 0 A_FaceTarget(5)
            CYBB P 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB Q 1 A_Chase
            CYBB Q 0 A_FaceTarget(5)
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3) 
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB R 1 A_Chase
            CYBB R 0 A_FaceTarget(5)
            CYBB R 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB S 1 A_Chase
            CYBB S 0 A_FaceTarget(5) 
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB T 1 A_Chase
            CYBB T 0 A_FaceTarget(5)
            CYBB T 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0)
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB U 1 A_Chase
            CYBB U 0 A_FaceTarget(5)
            "####" "#" 0 A_ChangeVelocity(1, 0, 0, 3)
            "####" "#" 0 A_JumpIfInTargetLOS ("Watch", 160, JLOSF_DEADNOJUMP, 2048, 0) 
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB V 1 A_Chase
            CYBB V 0 A_FaceTarget(5) 
            CYBB V 0 A_ChangeVelocity(1, 0, 0, 3)
            CYBB Q 0 A_SetUserVar("user_chasing",user_chasing+1)
            CYBB Q 0 A_JumpIf(user_chasing==12,"ChasingEnd")
            "####" "#" 0 A_Jump(24,"LaughChasing")
            Loop
        LaughChasing:
            "####" "#" 0 A_PlaySound("Laugh",0,1.0)
            Goto Chasing
        ChasingEnd:
            "####" "#" 0 //A_CheckSight ("Watch") 
            CYBB V 0 A_JumpIfTargetInLOS ("ChaseBegin", 360, JLOSF_DEADNOJUMP, 2048, 0)
            CYBB V 0 A_JumpIfInTargetLOS ("ChaseBegin", 190, JLOSF_DEADNOJUMP, 2048, 0)
            Goto LoseTarget
        LoseTarget:
            TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
            TNT1 A 0 A_ClearTarget
            //TNT1 A 0 ACS_EXECUTEALWAYS(51,0,0,0)
            Goto Spawn
        Melee:
            TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
            CYBI B 0 ACS_EXECUTEALWAYS(101,0,0,0)
            CYBI B 140 A_FaceTarget
            TNT1 A 0 A_JumpIfInventory("FreddyCheck2", 1, "JingleWander")
            Goto Chasing
        Pain:
            TROO H 2
            TROO H 2 A_Pain
            Goto See
        Death:
            TROO I 8
            TROO J 8 A_Scream
            TROO K 6
            TROO L 6 A_NoBlocking
            TROO M -1
            Stop
        XDeath:
            TROO N 5
            TROO O 5 A_XScream
            TROO P 5
            TROO Q 5 A_NoBlocking
            TROO RST 5
            TROO U -1
            Stop
        Raise:
            TROO MLKJI 8
            Goto See
    }
}

Actor Foxy 10003 {
    //$Category Animatronics
	var int user_chasing;
    Game Doom
    Health 2
    Radius 24
    Height 64
    Mass 1000
    Speed 2
    PainChance 0
    MeleeRange 42
    MaxStepHeight 24
    MaxDropOffHeight 24
    Monster
    +SLIDESONWALLS
    +LOOKALLAROUND
    -INVULNERABLE
    -NODAMAGE
    SeeSound ""
    PainSound ""
    DeathSound ""
    ActiveSound ""
    Obituary "%o met their fate to Foxy"

    States {
    Spawn:
        TNT1 A 0 A_JumpIfInventory("Activated", 1, "WakeUp")
        TNT1 A 0 A_Stop
        // CYBI B 0 ACS_EXECUTEALWAYS(59,0,2,0)
        // CYBI B 350
        CYBI B 350 A_PlaySound("foxy/song", CHAN_5, random(0, 1))
        CYBI B 2 A_Log("Foxy -> Spawn")
        Loop
    StandStill:
        CYBI Z 5 A_LookEx(0, 0, 0, 0, 360, "See")
        Loop
    WakeUp:
        TNT1 A 0 A_Log("Foxy -> WakeUp")
        // Goto Test
        "####" "#" 0 A_ClearTarget
        // "####" "#" 0 ACS_EXECUTEALWAYS(52, 0, 0, 0)
        CYBI BCDEFGHIJKLMNOPQRSTUVWXYZ 1
        CYBA ABCDEF 1
        TNT1 A 0 A_LookEx(0, 0, 0, 0, 360, "See")
        Goto See
    Test:
        CYBI A 55 A_Log("CYBI A")
        CYBI B 55 A_Log("CYBI B")
        CYBI C 55 A_Log("CYBI C")
        CYBI D 55 A_Log("CYBI D")
        CYBI E 55 A_Log("CYBI E")
        CYBI F 55 A_Log("CYBI F")
        CYBI G 55 A_Log("CYBI G")
        CYBI H 55 A_Log("CYBI H")
        CYBI I 55 A_Log("CYBI I")
        CYBI J 55 A_Log("CYBI J")
        CYBI K 55 A_Log("CYBI K")
        CYBI L 55 A_Log("CYBI L")
        CYBI M 55 A_Log("CYBI M")
        CYBI N 55 A_Log("CYBI N")
        CYBI O 55 A_Log("CYBI O")
        CYBI P 55 A_Log("CYBI P")
        CYBI Q 55 A_Log("CYBI Q")
        CYBI R 55 A_Log("CYBI R")
        CYBI S 55 A_Log("CYBI S")
        CYBI T 55 A_Log("CYBI T")
        CYBI U 55 A_Log("CYBI U")
        CYBI V 55 A_Log("CYBI V")
        CYBI W 55 A_Log("CYBI W")
        CYBI X 55 A_Log("CYBI X")
        CYBI Y 55 A_Log("CYBI Y")
        CYBI Z 55 A_Log("CYBI Z")
        Loop
    See:
        TNT1 A 0 A_Print("Foxy hunting") //ACS_EXECUTEALWAYS(50,0,0,0)
        Goto ChaseBegin
    ChaseBegin:
        CYBB B 1 A_Chase
        // TNT1 A 0 ACS_EXECUTEALWAYS(58,0,0,0)
        // TNT1 A 0 A_GiveInventory ("IsChasingFast", 1)
    ChasingStart:
        TNT1 A 0 A_SetUserVar("user_chasing",0)
        CYBB B 0 A_PlaySound("foxy/scream", CHAN_5, 1.0, 1.0)
    Chasing:
        CYBB B 1 A_Chase
        //CYBB B 0 A_FaceTarget(5)
        CYBB B 0 A_ChangeVelocity(1, 0, 0, 5) 
        CYBB C 1 A_Chase
        //CYBB C 0 A_FaceTarget(5)
        CYBB C 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB D 1 A_Chase
        "####" "#" 0 A_PlaySound("pstep", CHAN_6, 1.0)
        //CYBB D 0 A_FaceTarget(5)
        CYBB D 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB E 1 A_Chase
        //CYBB E 0 A_FaceTarget(5)
        CYBB E 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB F 1 A_Chase
        //CYBB F 0 A_FaceTarget(5)
        CYBB F 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB G 1 A_Chase
        //CYBB G 0 A_FaceTarget(5)
        CYBB G 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB H 1 A_Chase
        //CYBB H 0 A_FaceTarget(5)
        CYBB H 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB I 1 A_Chase
        //CYBB I 0 A_FaceTarget(5)
        CYBB I 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB J 1 A_Chase
        //CYBB J 0 A_FaceTarget(5)
        CYBB J 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB K 1 A_Chase
        //CYBB K 0 A_FaceTarget(5)
        CYBB K 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB L 1 A_Chase
        "####" "#" 0 A_PlaySound("pstep", CHAN_6, 1.0)
        //CYBB L 0 A_FaceTarget(5)
        CYBB L 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB M 1 A_Chase
        //CYBB M 0 A_FaceTarget(5)
        CYBB M 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB N 1 A_Chase
        //CYBB N 0 A_FaceTarget(5)
        CYBB N 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB O 1 A_Chase
        //CYBB O 0 A_FaceTarget(5)
        CYBB O 0 A_ChangeVelocity(1, 0, 0, 5) 
        CYBB P 1 A_Chase
        //CYBB P 0 A_FaceTarget(5)
        CYBB P 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB Q 1 A_Chase
        //CYBB Q 0 A_FaceTarget(5)
        CYBB Q 0 A_ChangeVelocity(1, 0, 0, 5)
        CYBB Q 0 A_SetUserVar("user_chasing",user_chasing+1)
        CYBB Q 0 A_JumpIf(user_chasing==35,"ChasingEnd")
        Loop
    ChasingEnd:
        CYBB Q 0 A_StopSound(CHAN_5)
        CYBB Q 0 A_StopSound(CHAN_6)
        CYBB Q 0 A_JumpIfTargetInLOS ("ChasingStart", 270, JLOSF_DEADNOJUMP, 2048, 0)
        CYBB Q 0 A_JumpIfInTargetLOS ("ChasingStart", 45, JLOSF_DEADNOJUMP, 2048, 0)
        Goto LoseTarget
    LoseTarget:
        TNT1 A 0 A_ClearTarget
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        TNT1 A 0 ACS_EXECUTEALWAYS(59,0,1,0)
        Goto StandStill
    Melee:
        TNT1 A 0 A_TakeInventory ("IsChasingFast", 999)
        CYBI B 0 ACS_EXECUTEALWAYS(101,0,0,0)
        CYBI B 140 A_FaceTarget
        TNT1 A 0 ACS_EXECUTEALWAYS(59,0,0,0)
        Goto StandStill
    Pain:
        TROO H 2
        TROO H 2 A_Pain
        Goto See
    Death:
        TROO I 8
        TROO J 8 A_Scream
        TROO K 6
        TROO L 6 A_NoBlocking
        TROO M -1
        Stop
    XDeath:
        TROO N 5
        TROO O 5 A_XScream
        TROO P 5
        TROO Q 5 A_NoBlocking
        TROO RST 5
        TROO U -1
        Stop
    Raise:
        TROO MLKJI 8
        Goto See
    }
}

Actor BonnieHead : PlayerPawn 10054 {
    //$Category Animatronic
    var int user_start;
    Speed 1
    Health 5
    Player.MaxHealth 5
    Radius 8
    Height 8
    Mass 100
    DamageFactor "Player", 0
    DamageFactor "Friendly", 0
    MaxStepHeight 8
    MaxDropOffHeight 8
    PainChance 0
    Scale 1.0
    Species "Helper"
    +NOTARGET
    +NOSKIN
    +THRUSPECIES
    Player.JumpZ 0.0
    Player.DamageScreenColor "Red"
    Player.ForwardMove 0.0, 0.0
    Player.SideMove 0.0, 0.0
    Player.AttackZOffset 16
    Player.ViewHeight 24
    Player.DisplayName "???"
    Player.MorphWeapon "Head"
    Player.WeaponSlot 1, Head
    Player.ColorRange 112, 127

    States {
	Spawn:
        TNT1 A 0
        CYBI A 9
        Loop
    See:
        CYBI A 1
        Loop
    Death:
        CYBI A 1
        TNT1 A -1
        Stop
    }
}

Actor GoldenFreddy 10051 {
    //$Category Animatronics
	var int user_charge;
    Game Doom
    Health 2
    Radius 16
    Height 16
    Mass 1000
    Speed 5
    PainChance 0
    MeleeRange 96
    MaxStepHeight 32
    MaxDropOffHeight 32
    CameraHeight 56
    Monster
    -INVULNERABLE
    -SOLID
    -NODAMAGE
    SeeSound ""
    PainSound ""
    DeathSound ""
    ActiveSound ""
    Obituary "%o met their fate to Golden Freddy"

    States {
    Spawn:
        TNT1 A 0
        TNT1 A 1 A_LookEx (LOF_NOSOUNDCHECK, 0, 384, 0, 360, "ChaseBegin") 
        Loop
    See:
        TNT1 A 0
        Goto ChaseBegin
    ChaseBegin:
        CYBI A 0 A_SetUserVar("user_charge",0)
        TNT1 A 0 A_FadeOut(0.9)
        CYBI AAAAA 1 A_FadeIn(0.2)
    Chase:
        CYBI A 1 
        "####" "#" 0 A_JumpIfInTargetLOS ("MeleeCharge", 10, JLOSF_DEADNOJUMP, 320, 0) 
        "####" "#" 0 A_JumpIfInTargetLOS ("MeleeCharge", 45, JLOSF_DEADNOJUMP, 256, 0) 
        "####" "#" 0 A_JumpIfInTargetLOS ("MeleeCharge", 120, JLOSF_DEADNOJUMP, 192, 0) 
        "####" "#" 0 A_JumpIfInTargetLOS ("MeleeCharge", 360, JLOSF_DEADNOJUMP, 160, 0) 
        "####" "#" 0 A_JumpIfTargetInLOS ("ChaseCharge", 360, JLOSF_DEADNOJUMP, 0, 0) 
    LoseTarget:
        TNT1 A 0 A_ClearTarget
        TNT1 A 0 ACS_EXECUTEALWAYS(102,0,0,0)
        Goto Spawn
    MeleeCharge:
        CYBI A 0 A_JumpIf(user_charge==25,"Melee")
        CYBI A 0 A_SetUserVar("user_charge",user_charge+1)
        Goto Chase
    Melee:
        CYBI AAAAAAAA 1 A_FadeOut(0.1)
    MeleeLoop:
        TNT1 A 1 A_Jump(1,"MeleeFinish")
        Loop
    MeleeFinish:
        TNT1 A 0 A_FadeIn(1.0)
        TNT1 A 140 ACS_EXECUTEALWAYS(101,0,0,0)
        TNT1 A 0 ACS_EXECUTEALWAYS(102,0,0,0)
        Goto Spawn
    Pain:
        TROO H 2
        TROO H 2 A_Pain
        Goto See
    Death:
        TROO I 8
        TROO J 8 A_Scream
        TROO K 6
        TROO L 6 A_NoBlocking
        TROO M -1
        Stop
    XDeath:
        TROO N 5
        TROO O 5 A_XScream
        TROO P 5
        TROO Q 5 A_NoBlocking
        TROO RST 5
        TROO U -1
        Stop
    Raise:
        TROO MLKJI 8
        Goto See
    }
}

Actor ShadowFreddy 10052 {
    //$Category Animatronics
	var int user_charge;
    Game Doom
    Health 2
    Radius 32
    Height 32
    Mass 1000
    Speed 15
    PainChance 0
    MeleeRange 96
    MaxStepHeight 32
    MaxDropOffHeight 32
    CameraHeight 56
    Monster
    +INVULNERABLE
    -SOLID
    +NODAMAGE
    SeeSound ""
    PainSound ""
    DeathSound ""
    ActiveSound ""
    Obituary "%o met their fate to Shadow Freddy"

    States {
    Spawn:
        TNT1 A 0 A_Wander
        TNT1 A 1 A_LookEx (LOF_NOSOUNDCHECK, 64, 256, 0, 360, "ChaseBegin") 
        Loop
    See:
        TNT1 A 0
        Goto ChaseBegin
    ChaseBegin:
        CYBI A 0 A_SetUserVar("user_charge",0)
        TNT1 A 0 A_FadeOut(0.9)
        CYBI AA 1 A_FadeIn(0.5)
    Chase:
        TNT1 A 0 A_Jump(48,"Lunge")
        CYBI A 4 A_FaceTarget
        TNT1 A 0 A_ClearTarget
        TNT1 A 0 ACS_EXECUTEALWAYS(102,0,0,0)
        Goto Spawn
    Lunge:
        CYBI A 0 A_Stop
        CYBI A 0 A_FaceTarget
        CYBI AA 6 A_ChangeVelocity(60,0,0,1)
        TNT1 A 0 A_ClearTarget
        TNT1 A 0 ACS_EXECUTEALWAYS(102,0,0,0)
        Goto Spawn
    Pain:
        TROO H 2
        TROO H 2 A_Pain
        Goto See
    Death:
        TROO I 8
        TROO J 8 A_Scream
        TROO K 6
        TROO L 6 A_NoBlocking
        TROO M -1
        Stop
    XDeath:
        TROO N 5
        TROO O 5 A_XScream
        TROO P 5
        TROO Q 5 A_NoBlocking
        TROO RST 5
        TROO U -1
        Stop
    Raise:
        TROO MLKJI 8
        Goto See
    }
}

Actor ShadowBonnie 10053 {
    //$Category Animatronics
	var int user_charge;
    Game Doom
    Health 2
    Radius 32
    Height 32
    Mass 1000
    Speed 15
    PainChance 0
    MeleeRange 96
    MaxStepHeight 32
    MaxDropOffHeight 32
    CameraHeight 56
    Monster
    +INVULNERABLE
    -SOLID
    +NODAMAGE
    SeeSound ""
    PainSound ""
    DeathSound ""
    ActiveSound ""
    Obituary "%o met their fate to Shadow Bonnie"
    
    States {
    Spawn:
        TNT1 A 0 A_Wander
        TNT1 A 1 A_LookEx (LOF_NOSOUNDCHECK, 64, 256, 0, 360, "ChaseBegin") 
        Loop
    See:
        TNT1 A 0
        Goto ChaseBegin
    ChaseBegin:
        CYBI A 0 A_SetUserVar("user_charge",0)
        TNT1 A 0 A_FadeOut(0.9)
        CYBI AA 1 A_FadeIn(0.5)
    Chase:
        TNT1 A 0 A_Jump(48,"Lunge")
        CYBI A 4 A_FaceTarget
        TNT1 A 0 A_ClearTarget
        TNT1 A 0 ACS_EXECUTEALWAYS(102,0,0,0)
        Goto Spawn
    Lunge:
        CYBI A 0 A_Stop
        CYBI A 0 A_FaceTarget
        CYBI AA 6 A_ChangeVelocity(60,0,0,1)
        TNT1 A 0 A_ClearTarget
        TNT1 A 0 ACS_EXECUTEALWAYS(102,0,0,0)
        Goto Spawn
    Pain:
        TROO H 2
        TROO H 2 A_Pain
        Goto See
    Death:
        TROO I 8
        TROO J 8 A_Scream
        TROO K 6
        TROO L 6 A_NoBlocking
        TROO M -1
        Stop
    XDeath:
        TROO N 5
        TROO O 5 A_XScream
        TROO P 5
        TROO Q 5 A_NoBlocking
        TROO RST 5
        TROO U -1
        Stop
    Raise:
        TROO MLKJI 8
        Goto See
    }
}

