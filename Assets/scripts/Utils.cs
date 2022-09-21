using System.Collections;
using UnityEngine;

enum AxisType
{
    X, Y, Z
}

public enum ChunkType
{
    Bridge, Road, Nature, Tunnel
}

public enum ChunkPosition
{
    Entry, InBetween
}

public enum ShiftDirection{
    Left, Right
}

public enum PlayerStatus{
    Idle, Run, Dead
}

public enum GameStatus{
    Play, Run, Stopped
}