def shout():
	return "This is returned from a function.".upper()


def whisper():
	return "This is returned from a function.".lower()


def greet(get_str):
	greeting = get_str()
	print(greeting)


greet(shout)
greet(whisper)
