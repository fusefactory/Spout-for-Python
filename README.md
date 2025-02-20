# Spout for Python

A modified Spout library using Boost::Python to enable Spout texture sharing using Python.
Previous versions of this library have been tested with Python 3.5 / 3.6 / 3.7.
This version of the library has been tested with Python 3.9 and a modern NVIDIA RTX A4000 GPU.

## Using the Library

Watch video use/demo > 
[![](http://img.youtube.com/vi/CmI4zwSAajw/0.jpg)](http://www.youtube.com/watch?v=CmI4zwSAajw "Spout for Python")

```python test.py```
or just check sample code in the test.py
```
# import library
from Library.Spout import Spout

def main() :
    # create spout object
    spout = Spout(silent = True)
    # create receiver
    spout.createReceiver('input')
    # create sender
    spout.createSender('output')

    while True :
        # check on exit
        spout.check()
        # receive data
        data = spout.receive()
        # send data
        spout.send(data)
    
if __name__ == "__main__":
    main()
```

If want multiple receivers/senders, check ```test_mult.py```

## Parameters 
Parameters and arguments for sender and receiver can be checked in the ```Library/Spout.py```

## Requirements
Install Spout from [here](https://spout.zeal.co/)
```
pip install -r requirements.txt
```

- pygame
- pyopengl

## Additional
* Allow multiple receivers senders
* Now it can be used as any python library, just few lines of code
* Automatically define the size of receiver and data to send
* Can change receiver size on the go
* Support different receiver/sender imageFormat/type
