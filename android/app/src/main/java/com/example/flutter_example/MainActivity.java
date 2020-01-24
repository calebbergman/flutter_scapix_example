package com.example.flutter_example;

import androidx.annotation.NonNull;
import io.flutter.embedding.android.FlutterActivity;
import io.flutter.embedding.engine.FlutterEngine;
import io.flutter.plugins.GeneratedPluginRegistrant;

import com.example.flutter_example.Person;

public class MainActivity extends FlutterActivity {
  private static final String CHANNEL = "com.example.flutter_example/person";

  @Override
  public void configureFlutterEngine(@NonNull FlutterEngine flutterEngine) {
    GeneratedPluginRegistrant.registerWith(flutterEngine);
    new MethodChannel(flutterEngine.getDartExecutor().getBinaryMessenger(), CHANNEL)
        .setMethodCallHandler((call, result) -> {
          if (call.method.equals("getPerson")) {
            Person p = new Person("Mr Foo Bar");
            if (p != null)
              result.success(p.SpeakName());
            else
              result.error("NOBUENO", "Couldn't make a person =(", null);
          } else {
            result.notImplemented();
          }
        });
  }
}
