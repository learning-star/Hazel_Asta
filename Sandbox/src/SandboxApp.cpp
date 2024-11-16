#include <Hazel.h>

class ExampleLater : public Hazel::Layer {
public:
	ExampleLater() 
		: Layer("Example") {}

	void OnUpdate() override {
		HZ_INFO("ExampleLater::Update");
	}

	void OnEvent(Hazel::Event& event) override {
		HZ_TRACE("{0}", event.ToString());
	}
};

class Sandbox : public Hazel::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLater());

	}
	~Sandbox() {

	}
};

Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}