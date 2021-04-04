# fmdemod
Stereo FM demodulator, takes in IQ samples outputs stereo PCM audio

# Usage
On Linux:

```
chmod +x main.cc
./main.cc < samples.iq
```

Must have c compiler and aplay utility and sound.
Can also be used with a command line SDR utility to pipe streaming IQ for playback.
 
