using System;

public class Timer
{
    private float duration;
    private float t;
    public bool IsRunning { get; private set; }
    private event Action onFinish, onCancel;

    public Timer(float duration, Action onFinish, Action onCancel)
    {
        this.duration = duration;
        this.onFinish = onFinish;
        this.onCancel = onCancel;
        t = duration;
    }
    /// <summary>
    /// Updates the timer
    /// </summary>
    /// <param name="dt">time since last tick</param>
    public void Tick(float dt)
    {
        if (!IsRunning)
            return;

        t -= dt;
        if (t > 0)
            return;

        IsRunning = false;
        if(onFinish != null)
            onFinish.Invoke();
    }

    /// <summary>
    /// cancels the timer
    /// </summary>
    public void Cancel()
    {
        IsRunning = false;
        if(onCancel != null)
            onCancel.Invoke();
    }

    /// <summary>
    /// starts the timer anew 
    /// </summary>
    public void Restart()
    {
        IsRunning = true;
        t = duration;
    }

    /// <summary>
    /// starts the timer, if it is not running yet
    /// </summary>
    public void Start()
    {
        if (IsRunning)
            return;

        IsRunning = true;
        t = duration;
    }
}
