class ClassDemo:
    count = 0
    def __init__(self, inputs, outputs):
        self.inputs = inputs
        self.outputs = outputs
        ClassDemo.count += 1
dc1 = ClassDemo("Hello world","114514")
dc2 = ClassDemo("114514",1919810)
print(dc1.inputs,"\n",dc2.outputs)